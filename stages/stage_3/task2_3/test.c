
void prefix(struct tnode *t){

    if(t==NULL)
        return;

    if(t->left==NULL && t->right==NULL){
    
        if(t->varname)
            printf("%c ",*(t->varname));
        else
            printf("%d ",t->val);
        

    }else{

        printf("%d ",t->nodetype);
    }



    prefix(t->left);
    prefix(t->right);


}
void postfix(struct tnode *t){

    if(t==NULL)
        return;
    
    postfix(t->left);
    postfix(t->right);
    
    if(t->left==NULL && t->right==NULL){
    
        if(t->varname)
            printf("%c ",*(t->varname));
        else
            printf("%d ",t->val);
        

    }else{

        printf("%d ",t->nodetype);
    }



}
