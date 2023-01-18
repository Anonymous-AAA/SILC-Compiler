#include "y.tab.h"

struct tnode* makeConstantLeafNode(int n)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->type=inttype;
    temp->val = n;
    temp->left = NULL;
    temp->right = NULL;
    temp->varname=NULL;
    return temp;
}
struct tnode* makeVariableLeafNode(char s)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->type=inttype;
    temp->varname= (char *) malloc(sizeof(char));
    *(temp->varname) = s;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeOperatorNode(int c,struct tnode *l,struct tnode *r){
    struct tnode *temp;
    int root_type=notype;
    
    if(c==PLUS || c==MINUS || c==MUL || c==DIV)
        root_type=inttype;
    else if (c!=EQUAL)
        root_type=booltype;


    if(l->type==r->type && (l->type==root_type || root_type==notype)){

    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->nodetype = c;
    temp->left = l;
    temp->right = r;
    temp->varname=NULL;
    temp->type=l->type;
    return temp;
    }else{
        yyerror("Type Mismatch");
        exit(0);
    }
}

struct tnode* makeConnectorNode(struct tnode *l,struct tnode *r){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->nodetype = CONNECTOR;
    temp->left = l;
    temp->right = r;
    temp->varname=NULL;
    return temp;
}


struct tnode* makeSingleNode(int c,struct tnode* node){
    struct tnode *temp;
    temp=(struct tnode *) malloc(sizeof(struct tnode));
    temp->nodetype = c;
    temp->left = node;
    temp->right = NULL;
    temp->varname = NULL;
    return temp;
}

struct tnode* makeCondLoopNode(int c,struct tnode *cond, struct tnode *st1, struct tnode *st2){
    
    struct tnode *temp;
    temp = (struct tnode*) malloc(sizeof(struct tnode));
    temp->nodetype = c;
    temp->left = cond;
    temp->mid = st1;
    temp->right = st2;
    return temp;
}











