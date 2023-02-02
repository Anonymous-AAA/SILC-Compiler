
void prefix(struct tnode *t){

    if(t==NULL)
        return;

    if(t->left==NULL && t->right==NULL && t->mid==NULL && t->type!=voidtype){
    
        if(t->varname)
            printf("%c ",*(t->varname));
        else
            printf("%d ",t->val);
        

    }else{

        printf("%d ",t->nodetype);
    }



    prefix(t->left);
    prefix(t->right);
    prefix(t->mid);


}
void postfix(struct tnode *t){

    if(t==NULL)
        return;
    
    postfix(t->left);
    postfix(t->right);
    postfix(t->mid);
    
    if(t->left==NULL && t->right==NULL && t->mid==NULL && t->type!=voidtype){
    
        if(t->varname)
            printf("%c ",*(t->varname));
        else
            printf("%d ",t->val);
        

    }else{

        printf("%d ",t->nodetype);
    }



}


void test(struct tnode* t){

            printf("Prefix: ");
            prefix(t);
            printf("\n");
            printf("Postfix: ");
            postfix(t);
            printf("\n");
}
