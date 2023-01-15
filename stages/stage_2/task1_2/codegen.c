#define MAX_REG 20

int reg=0;

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

int codeGen(struct tnode *t){

    if(t->left==NULL && t->right==NULL){
        if(t->varname){
            //It is a variable node
            return 4096+(*(t->varname))-'a';
        }
        int r=getReg();
        fprintf(fptr,"MOV R%d, %d\n",r,t->val);
        return r;
    }

    int r; 
    int r1=codeGen(t->left);
    int r2=-1;
    if(t->right)
        r2=codeGen(t->right);
    
    if(*(t->nodetype)=='+' || *(t->nodetype)=='-' || *(t->nodetype)=='*' || *(t->nodetype)=='/'){

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
    }


    switch(*(t->nodetype)) {
        case '+':
        fprintf(fptr,"ADD R%d, R%d\n",r1,r2);
        freeReg();
        break;
        case '-':
        fprintf(fptr,"SUB R%d, R%d\n",r1,r2);
        freeReg();
        break;
        case '*':
        fprintf(fptr,"MUL R%d, R%d\n",r1,r2);
        freeReg();
        break;
        case '/':
        fprintf(fptr,"DIV R%d, R%d\n",r1,r2);
        freeReg();
        break;
        case 'r':
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
        case 'w':
        r=getReg();
        int t1=getReg();        
        if(t->left->varname){   //allocate register if writing a variable
                fprintf(fptr,"MOV R%d, [%d]\n",t1,r1);
                r1=t1;
            }
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

        freeReg();
        if(t->left->varname){ //release the register
                freeReg();
            }
        break;
        case '=':
        fprintf(fptr,
                "MOV [%d], R%d\n",
                r1,r2);
        freeReg();
        break;
        case 'c':
        break;
        default:
        printf("Error");


    }

    return r1;

}


void code(struct tnode *t){
    fptr=fopen("target.xsm","w");
    fprintf(fptr,"0\n2056\n0\n0\n0\n0\n0\n0\n");

    fprintf(fptr,"MOV SP, 4121\n");  //Initializing SP after a-z allocation
    int res=codeGen(t);
    

    //exit
    fprintf(fptr,"MOV R2, \"Exit\"\nPUSH R2\n");
    fprintf(fptr,"PUSH R1\nPUSH R1\nPUSH R1\nPUSH R1\n");
    fprintf(fptr,"CALL 0\n");


}
