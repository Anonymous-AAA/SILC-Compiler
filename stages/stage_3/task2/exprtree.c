#include "y.tab.h"
#include "exprtree.h"
struct tnode* makeConstantLeafNode(int n)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->val = n;
    temp->left = NULL;
    temp->right = NULL;
    temp->mid = NULL;
    temp->varname=NULL;
    temp->type= inttype;
    return temp;
}
struct tnode* makeVariableLeafNode(char s)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->varname= (char *) malloc(sizeof(char));
    *(temp->varname) = s;
    temp->left = NULL;
    temp->right = NULL;
    temp->mid = NULL;
    temp->type= inttype;
    return temp;
}

struct tnode* makeOperatorNode(int c,struct tnode *l,struct tnode *r){
    
    if(r->type!=inttype && l->type!=inttype){
        yyerror("Type Mismatch");
        exit(1);
    }

    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->nodetype=c;
    temp->left = l;
    temp->right = r;
    temp->mid= NULL;
    temp->varname=NULL;

    
    if(c==PLUS || c==MINUS || c==MUL ||  c==DIV)
        temp->type=inttype;
    else if(c!=EQUAL)
        temp->type=booltype;

    return temp;
}

struct tnode* makeConnectorNode(struct tnode *l,struct tnode *r){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->nodetype=CONNECTOR;
    temp->left = l;
    temp->right = r;
    temp->mid = NULL;
    temp->varname=NULL;
    return temp;
}


struct tnode* makeSingleNode(int c,struct tnode* node){
    struct tnode *temp;
    temp=(struct tnode *) malloc(sizeof(struct tnode));
    temp->nodetype=c;
    temp->left = node;
    temp->right = NULL;
    temp->mid = NULL;
    temp->varname = NULL;
    return temp;
}


struct tnode* makeTriplets(int c,struct tnode* l,struct tnode* r,struct tnode* m){
    
    if(l->type!=booltype){
       yyerror("Condition is not boolean");
       exit(1);
    }


    struct tnode* temp;
    temp=(struct tnode *) malloc (sizeof(struct tnode));
    temp->nodetype=c;
    temp->left=l;
    temp->right=r;
    temp->mid=m;
    temp->varname=NULL;
    return temp;


}


