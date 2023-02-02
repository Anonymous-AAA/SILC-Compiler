
int var[26]; 


int evaluate(struct tnode* t){
    
    if(t->left==NULL && t->right==NULL)
    {
        if(t->varname)
            return (*(t->varname))-'a';
        else
            return t->val;


    }

    int r1,r2;

    switch (t->nodetype) {


        case READ:
             r1=evaluate(t->left);
            scanf("%d",&var[r1]);
            break;
        case WRITE:
             r1=evaluate(t->left);
            if(t->left->varname)
                printf("%d\n",var[r1]);
            else
                printf("%d\n",r1);
            break;
        case PLUS:
             r1=evaluate(t->left);
             r2=evaluate(t->right);
            if(t->left->varname)
                r1=var[r1];
            if(t->right->varname)
                r2=var[r2];
        
            return r1+r2;
            break;

        case MINUS:
             r1=evaluate(t->left);
             r2=evaluate(t->right);
            if(t->left->varname)
                r1=var[r1];
            if(t->right->varname)
                r2=var[r2];
        

            return r1-r2;
            break;

        case MUL:
             r1=evaluate(t->left);
             r2=evaluate(t->right);
            if(t->left->varname)
                r1=var[r1];
            if(t->right->varname)
                r2=var[r2];
        
            return r1*r2;
            break;

        case DIV:
             r1=evaluate(t->left);
             r2=evaluate(t->right);
            if(t->left->varname)
                r1=var[r1];
            if(t->right->varname)
                r2=var[r2];
        
            return r1/r2;
            break;

        case EQUAL:
             r1=evaluate(t->left);
             r2=evaluate(t->right);
            if(t->right->varname)
                r2=var[r2];
            var[r1]=r2;
            break;

        case CONNECTOR:
            evaluate(t->left);
            evaluate(t->right);
            break;

        case LT:
            r1=evaluate(t->left);
            r2=evaluate(t->right);


            if(t->left->varname)
                r1=var[r1];
            if(t->right->varname)
                r2=var[r2];

            if(r1<r2)
                return TRUE;
            else
                return FALSE;
            break;

        case GT:
            r1=evaluate(t->left);
            r2=evaluate(t->right);

            if(t->left->varname)
                r1=var[r1];
            if(t->right->varname)
                r2=var[r2];

            if(r1>r2)
                return TRUE;
            else
                return FALSE;
            break;


        case LE:
            r1=evaluate(t->left);
            r2=evaluate(t->right);

            if(t->left->varname)
                r1=var[r1];
            if(t->right->varname)
                r2=var[r2];

            if(r1<=r2)
                return TRUE;
            else
                return FALSE;
            break;
        
        case GE:
            r1=evaluate(t->left);
            r2=evaluate(t->right);

            if(t->left->varname)
                r1=var[r1];
            if(t->right->varname)
                r2=var[r2];

            if(r1>=r2)
                return TRUE;
            else
                return FALSE;

            break;

        case EQ:
            r1=evaluate(t->left);
            r2=evaluate(t->right);

            if(t->left->varname)
                r1=var[r1];
            if(t->right->varname)
                r2=var[r2];

            if(r1==r2)
                return TRUE;
            else
                return FALSE;
            
            break;

        case NE:
            r1=evaluate(t->left);
            r2=evaluate(t->right);

            if(t->left->varname)
                r1=var[r1];
            if(t->right->varname)
                r2=var[r2];

            if(r1!=r2)
                return TRUE;
            else
                return FALSE;
            
            break;

        
        case IF:
            r1=evaluate(t->left);
            if(r1==TRUE)
                evaluate(t->right);
            else if(t->mid)  //if condition is false
                evaluate(t->mid);
            break;

        case WHILE:
            while(evaluate(t->left)==TRUE)
                evaluate(t->right);
            break;
        

        default:
            printf("Error, Unknown nodetype: %d",t->nodetype);
            exit(1);

    }
        return 0;


}
