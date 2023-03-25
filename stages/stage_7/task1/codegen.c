#include "y.tab.h"

int reg=0; 
int label=0;
FILE *fptr;
int codeBeg=TRUE;


int getReg(){
  
    if(reg>=MAX_REG){
        printf("Error: Max registers in use. Cannot allot more registers.\n");
        exit(1);
    }

    reg++;
    return reg-1;

}

void freeReg(){
    if(reg<=0){
        printf("DevError: Reg count below 0\n");
        exit(1);
    }
    reg--;

}

int getLabel(){
    
    label++;
    return label;

}

int regInUse(){  //returns highest register number in use

    return reg-1;
}




int codeGen(struct tnode *t,int while_label_1,int while_label_2){

    int r,r1,r2,label_1,label_2,usedReg;
    

    switch(t->nodetype) {
        case CONSTNUM:
            r=getReg();
            fprintf(fptr,"MOV R%d, %d\n",r,t->val);
            return r;
            break;

        case CONSTSTR:
            r=getReg();
            fprintf(fptr,"MOV R%d, \"%s\"\n",r,t->strval);
            return r;
            break;

        case NUL:
            r=getReg();
            fprintf(fptr,"MOV R%d, \"null\"\n",r);
            return r;
            break;

        case SELF:  //self is same as var
        case VAR:   //returns register containing address of the var

            if(t->left && t->left->nodetype!=FIELD){    //It is an array  variable
                r1=codeGen(t->left,while_label_1,while_label_2);
                if(t->left->nodetype==VAR)
                    fprintf(fptr,"MOV R%d, [R%d]\n",r1,r1);
                r=getReg();
                fprintf(fptr,"MOV R%d, %d\n",r,t->Gentry->binding);
                fprintf(fptr,"ADD R%d, R%d\n",r1,r);
                freeReg();
                return r1;
            }

            //If it is a field
            //start from here
            if(t->left && t->left->nodetype==FIELD){
                
                r=getReg();
                //setting binding according to whether it is local or global (Local overrides global)
                int binding=t->Lentry?t->Lentry->binding:t->Gentry->binding;
                fprintf(fptr,"MOV R%d, %d\n",r,binding);
                if(t->Lentry)
                    fprintf(fptr,"ADD R%d,BP\n",r);

                //fprintf(fptr,"MOV R%1$d, [R%1$d]\n",r);

                tnode *temp=t->left;

                r1=getReg();

                while(temp){
                    
                    if(temp->nodetype==FUNCTION){
                        //do something here
                    }
                else{
                    fprintf(fptr,"MOV R%1$d, [R%1$d]\n",r);
                    fprintf(fptr,"MOV R%d, %d\n",r1,temp->val);
                    fprintf(fptr,"ADD R%d, R%d\n",r,r1);
                    }
                
                    temp=temp->left;
                }

                freeReg();
                return r;
            }

            //If its not an array and field
            r=getReg();
            //setting binding according to whether it is local or global (Local overrides global)
            int binding=t->Lentry?t->Lentry->binding:t->Gentry->binding;
            fprintf(fptr,"MOV R%d, %d\n",r,binding);
            if(t->Lentry)
                fprintf(fptr,"ADD R%d,BP\n",r);
            return r;
            break;


        case PLUS:
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r1,r1);
            }

            if(t->right->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r2,r2);
            }
            fprintf(fptr,"ADD R%d, R%d\n",r1,r2);
            freeReg();
            break;

        case MINUS:
            
            if(t->right){  //if binary minus
                r1=codeGen(t->left,while_label_1,while_label_2);
                r2=codeGen(t->right,while_label_1,while_label_2);

                if(t->left->nodetype==VAR){
                    fprintf(fptr,"MOV R%d, [R%d]\n",r1,r1);
                }

                if(t->right->nodetype==VAR){  
                    fprintf(fptr,"MOV R%d, [R%d]\n",r2,r2);
                }
            }   
            else{  //if unary minus
                r1=getReg();
                fprintf(fptr,"MOV R%d, 0\n",r1);
                r2=codeGen(t->left,while_label_1,while_label_2);

                if(t->left->nodetype==VAR){
                    fprintf(fptr,"MOV R%d, [R%d]\n",r2,r2);
                }
            }



            fprintf(fptr,"SUB R%d, R%d\n",r1,r2);
            freeReg();
            break;
        
        case MUL:
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r1,r1);
            }

            if(t->right->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r2,r2);
            }
            fprintf(fptr,"MUL R%d, R%d\n",r1,r2);
            freeReg();
            break;
        
        case DIV:
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r1,r1);
            }

            if(t->right->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r2,r2);
            }
            fprintf(fptr,"DIV R%d, R%d\n",r1,r2);
            freeReg();
            break;
        
        case MOD:
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r1,r1);
            }

            if(t->right->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r2,r2);
            }
            fprintf(fptr,"MOD R%d, R%d\n",r1,r2);
            freeReg();
            break;

        case READ:
            r1=codeGen(t->left,while_label_1,while_label_2);
            r=getReg();
            fprintf(fptr,
                    "MOV R%1$d, \"Read\"\n"
                    "PUSH R%1$d\n"
                    "MOV R%1$d, -1\n"
                    "PUSH R%1$d\n"
                    "PUSH R%2$d\n"
                    "PUSH R0\n"
                    "PUSH R0\n"
                    "CALL 0\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n",
                    r,
                    r1);
            freeReg();
            freeReg();
            break;
        
        case WRITE:
            r1=codeGen(t->left,while_label_1,while_label_2);
            r=getReg();
            if(t->left->nodetype==VAR){   //allocate register if writing a variable
            fprintf(fptr,
                    "MOV R%1$d, \"Write\"\n"
                    "PUSH R%1$d\n"
                    "MOV R%1$d, -2\n"
                    "PUSH R%1$d\n"
                    "MOV R%1$d, [R%2$d]\n"
                    "PUSH R%1$d\n"
                    "PUSH R2\n"
                    "PUSH R2\n"
                    "CALL 0\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n",
                    r,
                    r1);
                }else{

            fprintf(fptr,
                    "MOV R%1$d, \"Write\"\n"
                    "PUSH R%1$d\n"
                    "MOV R%1$d, -2\n"
                    "PUSH R%1$d\n"
                    "MOV R%1$d, R%2$d\n"
                    "PUSH R%1$d\n"
                    "PUSH R2\n"
                    "PUSH R2\n"
                    "CALL 0\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n",
                    r,
                    r1);
                }

            freeReg();
            freeReg();
            break;
        
        case EQUAL:
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->right->nodetype==VAR){
                fprintf(fptr,
                        "MOV R%d, [R%d]\n",
                        r2,r2);
            }
            fprintf(fptr,
                    "MOV [R%d], R%d\n",
                    r1,r2);
            freeReg();
            freeReg();
            break;
        
        case CONNECTOR:
            codeGen(t->left,while_label_1,while_label_2);
            codeGen(t->right,while_label_1,while_label_2);
            break;
        


        case LT:
        
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r1,r1);
            }

            if(t->right->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r2,r2);
            }
            fprintf(fptr,"LT R%d, R%d\n",r1,r2);
            freeReg();
            break;

        case GT:
        
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r1,r1);
            }

            if(t->right->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r2,r2);
            }
            fprintf(fptr,"GT R%d, R%d\n",r1,r2);
            freeReg();
            break;

        case LE:
        
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r1,r1);
            }

            if(t->right->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r2,r2);
            }
            fprintf(fptr,"LE R%d, R%d\n",r1,r2);
            freeReg();
            break;

        case GE:
        
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r1,r1);
            }

            if(t->right->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r2,r2);
            }
            fprintf(fptr,"GE R%d, R%d\n",r1,r2);
            freeReg();
            break;

        case EQ:
        
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r1,r1);
            }

            if(t->right->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r2,r2);
            }
            fprintf(fptr,"EQ R%d, R%d\n",r1,r2);
            freeReg();
            break;



        case NE:
        
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r1,r1);
            }

            if(t->right->nodetype==VAR){
                fprintf(fptr,"MOV R%d, [R%d]\n",r2,r2);
            }
            fprintf(fptr,"NE R%d, R%d\n",r1,r2);
            freeReg();
            break;


        case AND:
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            //left and right nodes cannot be variables as boolean variables are not permitted
            fprintf(fptr,"MUL R%d, R%d\n",r1,r2);
            freeReg();
            break;
            
        case OR:
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            //left and right nodes cannot be variables as boolean variables are not permitted
            fprintf(fptr,"ADD R%d, R%d\n",r1,r2); //Add is used false is represented by zero true is represented by non-zero
            freeReg();
            break;


        case WHILE:
            while_label_1=getLabel();
            while_label_2=getLabel();
            fprintf(fptr,"L%d:\n",while_label_1);
            
            //Generate code for the guard expression.
            r1=codeGen(t->left,while_label_1,while_label_2);   //r1 contains the result
            
            //Generate code to compare the result to zero and if so jump to label_2   // loop exit
            fprintf(fptr,
                    "JZ R%d,L%d\n",
                    r1,while_label_2);
            
            //Generate code for the body of the while loop.
            codeGen(t->right,while_label_1,while_label_2);
            fprintf(fptr, "JMP L%d\n", while_label_1);   // return to the beginning of the loop.
            fprintf(fptr, "L%d:\n", while_label_2);       // Place the second label here

            freeReg();  //freeing the register that stored the result


            break;


        case IF:
            label_1=getLabel();

            if(t->mid)  //only if else part exists
                label_2=getLabel();
            
            //generate code for guard
            r1=codeGen(t->left,while_label_1,while_label_2);

            //compare the result
            fprintf(fptr,
                    "JZ R%d,L%d\n",
                    r1,label_1);

            //body
            codeGen(t->right,while_label_1,while_label_2);

            if(t->mid)  //only if else part exists
                fprintf(fptr,
                        "JMP L%d\n",
                        label_2);

            fprintf(fptr,
                    "L%d:\n",
                    label_1);
            
            //else part
            if(t->mid){
                codeGen(t->mid,while_label_1,while_label_2);
                fprintf(fptr,
                        "L%d:\n",
                        label_2);
            }

            freeReg();
            break;


        case BREAK:
           
            if(while_label_2!=-1){
                fprintf(fptr,
                        "JMP L%d\n",
                        while_label_2);
            }
            //If  break is not inside a while loop, ignore
            break;

        case CONTINUE:
            
            if(while_label_1!=-1){
                fprintf(fptr,
                        "JMP L%d\n",
                        while_label_1);
            }

            //If continue is not inside while loop, ignore
            break;


        case FUNCTION:  //function call
            
            //Allot register for storing the  return value
            r1=getReg();

            usedReg=regInUse();

            //Push registers in use to the stack
            //Registers are pushed in reverse order (observe that we are pushing the return register also)
            for(int i=usedReg;i>=0;i--){
                fprintf(fptr,
                        "PUSH R%d\n",
                        i);
                freeReg();   //freeReg() happens in reverse order
            }


            //Evaluate args and push to the stack
            tnode *temp=t->arglist;
            while(temp){
                r2=codeGen(temp,while_label_1,while_label_2);

                if(temp->nodetype==VAR){    //pass by value
                fprintf(fptr,
                        "MOV R%d, [R%d]\n",
                        r2,r2);
                }

                fprintf(fptr,
                        "PUSH R%d\n",
                        r2);
                freeReg();
                temp=temp->mid;
            }


            //Push one empty space for callee to store the return value(no getreg() used as register values are not overwritten)
            fprintf(fptr,"PUSH R0\n");

            //Generate Call instruction to the binding of the function
            fprintf(fptr,
                    "CALL F%d\n",
                    t->Gentry->flabel);


            //After return from the callee

            //Extract  the return value from the stack.
            fprintf(fptr,
                    "POP R%d\n",
                    r1);
            
            //Pop out arguments from the stack.
            temp=t->arglist;
            r2=GARBAGE_REG;   //GARBAGE_REG is used because value is discarded
            while(temp){
                fprintf(fptr,
                        "POP R%d\n",
                        r2);
                temp=temp->mid;
            }

           //Restore the registers in the right order (Reverse of PUSH) 
            for(int i=0;i<=usedReg-1;i++){      // usedReg-1 to not  overwrite the return register
                fprintf(fptr,
                        "POP R%d\n",
                        getReg());
            }

            
            //r2 should be equal to r1
            r2=getReg();    //to reserve back r1


            //Decrement SP by 1 to remove context of register alloted for return value
            fprintf(fptr,"DCR SP\n");


            break;

        case RET:
            
            //Pop out the local variables from the stack.
            r1=getReg();
            for(int i=1;i<nextLocLBinding;i++){
                fprintf(fptr,
                        "POP R%d\n",
                        r1);
            }
            
            freeReg();

            //Calculate the return expression and store the value in [BP-2]
            r1=codeGen(t->left, while_label_1, while_label_2);
            r2=getReg();

            fprintf(fptr,
                    "MOV R%1$d, BP\n"
                    "SUB R%1$d, 2\n",
                    r2);


            if(t->left->nodetype==VAR)
                fprintf(fptr,
                        "MOV [R%d], [R%d]\n",
                        r2,r1);
            else
                fprintf(fptr,
                        "MOV [R%d], R%d\n",
                        r2,r1);
            
            //Free registers
            freeReg();
            freeReg();

            //set BP to the old value of BP in the stack and execute RET instruction
            fprintf(fptr,
                    "POP BP\n"
                    "RET\n");

            break;


        case INIT:
            //Allot register for storing the  return value
            r1=getReg();


            usedReg=regInUse();

            //Push registers in use to the stack
            //Registers are pushed in reverse order (observe that we are pushing the return register also)
            for(int i=usedReg;i>=0;i--){
                fprintf(fptr,
                        "PUSH R%d\n",
                        i);
                freeReg();   //freeReg() happens in reverse order
            }
            
            r=getReg();

            
            //invoke the library module
            fprintf(fptr,
                    "MOV R%1$d,\"Heapset\"\n"  
                    "PUSH R%1$d\n"   // func code
                    "PUSH R%1$d\n"    //arg1
                    "PUSH R%1$d\n"    //arg2
                    "PUSH R%1$d\n"    //arg3
                    "PUSH R%1$d\n"    //empty space for return
                    "CALL 0\n",
                    r);

            freeReg();

            //Extract  the return value from the stack.
            fprintf(fptr,
                    "POP R%d\n",
                    r1);


            r2=GARBAGE_REG;   //GARBAGE_REG is used because value is discarded
            fprintf(fptr,
                    "POP R%1$d\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n",
                    r2);
           

            //Restore the registers in the right order (Reverse of PUSH) 
            for(int i=0;i<=usedReg-1;i++){      // usedReg-1 to not  overwrite the return register
                fprintf(fptr,
                        "POP R%d\n",
                        getReg());
            }

            
            //Check for errors
            r2=getReg();
            if(r1!=r2){
                printf("DevError: Unexpected Register for return value. Expected R%d but got R%d\n",r1,r2);
                printf("Info: Function:Init usedReg:%d\n",usedReg);
                exit(1);
            }


            //Decrement SP by 1 to remove context of register alloted for return value
            fprintf(fptr,"DCR SP\n");
            break;
        

        case ALLOC:
            //Allot register for storing the  return value
            r1=getReg();

            usedReg=regInUse();

            //Push registers in use to the stack
            //Registers are pushed in reverse order (observe that we are pushing the return register also)
            for(int i=usedReg;i>=0;i--){
                fprintf(fptr,
                        "PUSH R%d\n",
                        i);
                freeReg();   //freeReg() happens in reverse order
            }
            
            r=getReg();
            int size=GetSize(t->type);

            //start from here 
            //invoke the library module
            fprintf(fptr,
                    "MOV R%1$d,\"Alloc\"\n"  
                    "PUSH R%1$d\n"   // func code
                    "MOV R%1$d, %2$d\n"
                    "PUSH R%1$d\n"    //arg1
                    "PUSH R%1$d\n"    //arg2
                    "PUSH R%1$d\n"    //arg3
                    "PUSH R%1$d\n"    //empty space for return
                    "CALL 0\n",
                    r,size);

            freeReg();

            //Extract  the return value from the stack.
            fprintf(fptr,
                    "POP R%d\n",
                    r1);


            r2=GARBAGE_REG;   //GARBAGE_REG is used because value is discarded
            fprintf(fptr,
                    "POP R%1$d\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n",
                    r2);
           

            //Restore the registers in the right order (Reverse of PUSH) 
            for(int i=0;i<=usedReg-1;i++){      // usedReg-1 to not  overwrite the return register
                fprintf(fptr,
                        "POP R%d\n",
                        getReg());
            }

            
            //Check for errors
            r2=getReg();
            if(r1!=r2){
                printf("DevError: Unexpected Register for return value. Expected R%d but got R%d\n",r1,r2);
                printf("Info: Function: Alloc usedReg:%d\n",usedReg);
                exit(1);
            }


            //Decrement SP by 1 to remove context of register alloted for return value
            fprintf(fptr,"DCR SP\n");
            break;


        case FREE:
            //Allot register for storing the  return value
            r1=getReg();

            usedReg=regInUse();

            //Push registers in use to the stack
            //Registers are pushed in reverse order (observe that we are pushing the return register also)
            for(int i=usedReg;i>=0;i--){
                fprintf(fptr,
                        "PUSH R%d\n",
                        i);
                freeReg();   //freeReg() happens in reverse order
            }
            
            r=getReg();
            r2=codeGen(t->left,while_label_1,while_label_2);

            //Getting mempry location to set the memory location to null
            fprintf(fptr,"MOV R%d, R%d\n",r,r2);

            //Getting the address of the variable in heap
            fprintf(fptr,"MOV R%1$d, [R%1$d]\n",r2);

            //setting memory location to null
            fprintf(fptr,"MOV [R%d], \"null\"\n",r);


            //invoke the library module
            fprintf(fptr,
                    "MOV R%1$d,\"Free\"\n"  
                    "PUSH R%1$d\n"   // func code
                    "PUSH R%2$d\n"    //arg1
                    "PUSH R%1$d\n"    //arg2
                    "PUSH R%1$d\n"    //arg3
                    "PUSH R%1$d\n"    //empty space for return
                    "CALL 0\n",
                    r,r2);

            freeReg();
            freeReg();
            //Extract  the return value from the stack.
            fprintf(fptr,
                    "POP R%d\n",
                    r1);


            r2=GARBAGE_REG;   //GARBAGE_REG is used because value is discarded
            fprintf(fptr,
                    "POP R%1$d\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n"
                    "POP R%1$d\n",
                    r2);
           

            //Restore the registers in the right order (Reverse of PUSH) 
            for(int i=0;i<=usedReg-1;i++){      // usedReg-1 to not  overwrite the return register
                fprintf(fptr,
                        "POP R%d\n",
                        getReg());
            }

            
            //Check for errors
            r2=getReg();
            if(r1!=r2){
                printf("DevError: Unexpected Register for return value. Expected R%d but got R%d\n",r1,r2);
                printf("Info: Function: Alloc usedReg:%d\n",usedReg);
                exit(1);
            }


            //Decrement SP by 1 to remove context of register alloted for return value
            fprintf(fptr,"DCR SP\n");
            break;

        case BRKP:
            fprintf(fptr,"BRKP\n");
            break;

        default:
            printf("DevError: Unidentified nodetype in Codegen : %d\n",t->nodetype);
            exit(0);

    }
    
    //results are stored in r1 
    return r1;

}



void genHeader(){

    fprintf(fptr,"0\n2056\n0\n0\n0\n0\n0\n0\n");
    fprintf(fptr,"MOV SP, %d\n",getGBinding(0));  //Initializing SP after a-z allocation
    fprintf(fptr,"PUSH R0\n");  //Empty space in stack to store return value
    fprintf(fptr,"CALL MAIN\n");    //Calling main function
    
    //After return from main, exit the program
    fprintf(fptr,"MOV R2, \"Exit\"\nPUSH R2\n");
    fprintf(fptr,"PUSH R1\nPUSH R1\nPUSH R1\nPUSH R1\n");
    fprintf(fptr,"CALL 0\n");
}



void codeFunction(struct tnode* body, char *name){
    
    if(codeBeg==TRUE){
        //open file in write mode
        fptr=fopen("target_label.xsm","w");
        genHeader();
        codeBeg=FALSE;
    }else{
    
        //open file in append mode
        fptr=fopen("target_label.xsm","a");

    }



    if(name){
        Gsymbol *entry=GLookup(name);
        if(entry){
        fprintf(fptr,
                "F%d:\n",
                entry->flabel);
        }else{
        
        Memberfunclist *mentry=Class_Mlookup(Ccurr,name);
        fprintf(fptr,
                "F%d:\n",
                mentry->flabel);
        }
    }else{
        fprintf(fptr,
                "MAIN:\n");
    }


    //Save the BP of the caller by pushing the BP register into the stack
    fprintf(fptr,
            "PUSH BP\n");

    //Set BP to the present value of SP register
    fprintf(fptr,
            "MOV BP,SP\n");

    //Push enough space in the stack for storing the local variables.
    for(int i=1;i<nextLocLBinding;i++){
        fprintf(fptr,
            "PUSH R0\n");
    }

    //Generate code for the function
    int res=codeGen(body, -1, -1);

    //close the file
    fclose(fptr);

}


