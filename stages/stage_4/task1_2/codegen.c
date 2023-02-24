#include "y.tab.h"

int reg=0;
int label=0;
FILE *fptr;


int getReg(){
  
    if(reg>=MAX_REG){
        yyerror("Out of registers");
        exit(1);
    }

    reg++;
    return reg-1;

}

void freeReg(){
    reg--;

}

int getLabel(){
    
    label++;
    return label;

}


int codeGen(struct tnode *t,int while_label_1,int while_label_2){

    int r,r1,r2,label_1,label_2;
    
    // if while_label is -1 , it indicates that statment is not inside a while loop
    //int while_label_1=-1;
    //int while_label_2=-1;

    if(t->left==NULL && t->right==NULL && t->mid==NULL && t->type!=voidtype){
        if(t->varname){
            //It is a variable node, the address in memory is returned
            return Lookup(t->varname)->binding;
        }
        //if it is a constant
        r=getReg();

        if(t->strval)   //if it is a string constant
            fprintf(fptr,"MOV R%d, \"%s\"\n",r,t->strval);
        else        //if it is a num constant
            fprintf(fptr,"MOV R%d, %d\n",r,t->val);
        
        return r;

    }



    switch(t->nodetype) {
        case PLUS:
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r1);
                r1=r;
            }

            if(t->right->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r2);
                r2=r;
            }
            fprintf(fptr,"ADD R%d, R%d\n",r1,r2);
            freeReg();
            break;

        case MINUS:
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r1);
                r1=r;
            }

            if(t->right->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r2);
                r2=r;
            }
            fprintf(fptr,"SUB R%d, R%d\n",r1,r2);
            freeReg();
            break;
        
        case MUL:
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r1);
                r1=r;
            }

            if(t->right->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r2);
                r2=r;
            }
            fprintf(fptr,"MUL R%d, R%d\n",r1,r2);
            freeReg();
            break;
        
        case DIV:
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r1);
                r1=r;
            }

            if(t->right->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r2);
                r2=r;
            }
            fprintf(fptr,"DIV R%d, R%d\n",r1,r2);
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
                    "MOV R%1$d, %2$d\n"
                    "PUSH R%1$d\n"
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
            break;
        
        case WRITE:
            r1=codeGen(t->left,while_label_1,while_label_2);
            r=getReg();
            if(t->left->varname){   //allocate register if writing a variable
            fprintf(fptr,
                    "MOV R%1$d, \"Write\"\n"
                    "PUSH R%1$d\n"
                    "MOV R%1$d, -2\n"
                    "PUSH R%1$d\n"
                    "MOV R%1$d, [%2$d]\n"
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
            break;
        
        case EQUAL:
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->right->varname){
                r=getReg();
                fprintf(fptr,
                        "MOV R%d, [%d]\n",
                        r,r2);
                r2=r;
            }
            fprintf(fptr,
                    "MOV [%d], R%d\n",
                    r1,r2);
            freeReg();
            break;
        
        case CONNECTOR:
            codeGen(t->left,while_label_1,while_label_2);
            codeGen(t->right,while_label_1,while_label_2);
            break;
        


        case LT:
        
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r1);
                r1=r;
            }

            if(t->right->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r2);
                r2=r;
            }
            fprintf(fptr,"LT R%d, R%d\n",r1,r2);
            freeReg();
            break;

        case GT:
        
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r1);
                r1=r;
            }

            if(t->right->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r2);
                r2=r;
            }
            fprintf(fptr,"GT R%d, R%d\n",r1,r2);
            freeReg();
            break;

        case LE:
        
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r1);
                r1=r;
            }

            if(t->right->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r2);
                r2=r;
            }
            fprintf(fptr,"LE R%d, R%d\n",r1,r2);
            freeReg();
            break;

        case GE:
        
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r1);
                r1=r;
            }

            if(t->right->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r2);
                r2=r;
            }
            fprintf(fptr,"GE R%d, R%d\n",r1,r2);
            freeReg();
            break;

        case EQ:
        
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r1);
                r1=r;
            }

            if(t->right->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r2);
                r2=r;
            }
            fprintf(fptr,"EQ R%d, R%d\n",r1,r2);
            freeReg();
            break;



        case NE:
        
            r1=codeGen(t->left,while_label_1,while_label_2);
            r2=codeGen(t->right,while_label_1,while_label_2);
            if(t->left->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r1);
                r1=r;
            }

            if(t->right->varname){
                r=getReg();
                fprintf(fptr,"MOV R%d, [%d]\n",r,r2);
                r2=r;
            }
            fprintf(fptr,"NE R%d, R%d\n",r1,r2);
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




        default:
            printf("Error in Codegen %d\n",t->nodetype);
            exit(0);

    }

    return r1;

}


void code(struct tnode *t){
    fptr=fopen("target_label.xsm","w");
    fprintf(fptr,"0\n2056\n0\n0\n0\n0\n0\n0\n");

    fprintf(fptr,"MOV SP, 4121\n");  //Initializing SP after a-z allocation
    int res=codeGen(t,-1,-1);      //-1 is the initial value for while labels
    

    //exit
    fprintf(fptr,"MOV R2, \"Exit\"\nPUSH R2\n");
    fprintf(fptr,"PUSH R1\nPUSH R1\nPUSH R1\nPUSH R1\n");
    fprintf(fptr,"CALL 0\n");
    
    fclose(fptr);

}