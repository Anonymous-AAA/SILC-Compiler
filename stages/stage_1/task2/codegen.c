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
        int r=getReg();
        fprintf(fptr,"MOV R%d, %d\n",r,t->val);
        return r;
    }

    int r1=codeGen(t->left);
    int r2=codeGen(t->right);

    switch(*(t->op)) {
        case '+':
        fprintf(fptr,"ADD R%d, R%d\n",r1,r2);
        break;
        case '-':
        fprintf(fptr,"SUB R%d, R%d\n",r1,r2);
        break;
        case '*':
        fprintf(fptr,"MUL R%d, R%d\n",r1,r2);
        break;
        case '/':
        fprintf(fptr,"DIV R%d, R%d\n",r1,r2);
        break;
        default:
        printf("Error");


    }

    freeReg();
    return r1;

}


void code(struct tnode *t){
    fptr=fopen("target.xsm","w");
    fprintf(fptr,"0\n2056\n0\n0\n0\n0\n0\n0\n");
    int res=codeGen(t);
    
    //The result of expression evaluation may be stored in the first location of the stack region – memory address 4096. and print it
    fprintf(fptr,"MOV [4096],R%d\n",res);
    fprintf(fptr,"MOV SP, 4096\n");
    fprintf(fptr,"MOV R2, \"Write\"\nPUSH R2\n");
    fprintf(fptr,"MOV R2, -2\nPUSH R2\n");
    fprintf(fptr,"MOV R0,[4096]\nPUSH R0\n");
    fprintf(fptr,"PUSH R0\nPUSH R0\nCALL 0\n");
    fprintf(fptr,"POP R0\nPOP R1\nPOP R1\nPOP R1\nPOP R1\n");

    //exit
    fprintf(fptr,"MOV R2, \"Exit\"\nPUSH R2\n");
    fprintf(fptr,"PUSH R1\nPUSH R1\nPUSH R1\nPUSH R1\n");
    fprintf(fptr,"CALL 0\n");


}
