
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
    if(t->right && t->nodetype!=IF && t->nodetype!=WHILE)
        r2=evaluate(t->right);
    
    if((t->nodetype!=READ || t->nodetype!=EQUAL) && t->left->varname)
        r1=var[r1];
    if(t->right && t->right->varname)
        r2=var[r2];
   
    switch (t->nodetype) {


        case READ:
            scanf("%d",&var[r1]);
            break;
        case WRITE:
            printf("%d\n",r1);
            break;

        case IF:
            if(r1==TRUE)
                r2=evaluate(t->mid);
            else if(t->right)
                r2=evaluate(t->right);
            break;
        
        case WHILE:
            while(r1==TRUE){
                r2=evaluate(t->mid);
                r1=evaluate(t->left);
            }
            break;



        case PLUS:
        
            return r1+r2;
            break;

        case MINUS:
        

            return r1-r2;
            break;

        case MUL:
        
            return r1*r2;
            break;

        case DIV:
        
            return r1/r2;
            break;

        case EQUAL:
            var[r1]=r2;
            break;


        case LT:
            if(r1<r2)
                return TRUE;
            else
                return FALSE;
            break;

        case GT:
            if(r1>r2)
                return TRUE;
            else
                return FALSE;
            break;

        case LE:
            if(r1<=r2)
                return TRUE;
            else
                return FALSE;
            break;

        case GE:
            if(r1>=r2)
                return TRUE;
            else
                return FALSE;
            break;

        case NE:
            if(r1!=r2)
                return TRUE;
            else
                return FALSE;
            break;

        case EE:
            if(r1==r2)
                return TRUE;
            else
                return FALSE;
            break;
            

        case CONNECTOR:
            break;

        default:
            printf("Error %d",t->nodetype);
            exit(1);

    }
        return 0;


}
