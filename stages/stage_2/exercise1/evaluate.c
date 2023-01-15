
int var[26]; 


int evaluate(struct tnode* t){
    
    if(t->left==NULL && t->right==NULL)
    {
        if(t->varname)
            return (*(t->varname))-'a';
        else
            return t->val;


    }

    int r1=evaluate(t->left);
    int r2=0;
    if(t->right)
        r2=evaluate(t->right);

    switch (*(t->nodetype)) {


        case 'r':
            scanf("%d",&var[r1]);
            break;
        case 'w':
            if(t->left->varname)
                printf("%d\n",var[r1]);
            else
                printf("%d\n",r1);
            break;
        case '+':
            if(t->left->varname)
                r1=var[r1];
            if(t->right->varname)
                r2=var[r2];
        
            return r1+r2;
            break;

        case '-':
            if(t->left->varname)
                r1=var[r1];
            if(t->right->varname)
                r2=var[r2];
        

            return r1-r2;
            break;

        case '*':
            if(t->left->varname)
                r1=var[r1];
            if(t->right->varname)
                r2=var[r2];
        
            return r1*r2;
            break;

        case '/':
            if(t->left->varname)
                r1=var[r1];
            if(t->right->varname)
                r2=var[r2];
        
            return r1/r2;
            break;

        case '=':
            var[r1]=r2;
            break;

        case 'c':
            break;

        default:
            printf("Error %c",*(t->nodetype));
            exit(1);

    }
        return 0;


}
