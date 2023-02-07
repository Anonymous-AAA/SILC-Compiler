#include "y.tab.h"
#include "exprtree.h"
#include "symbol.h"
#include "symbol.c"
#include "string.h"

//Constant NUM node
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
    temp->Gentry=NULL;
    temp->strval=NULL;
    temp->nodetype=CONSTNUM;
    return temp;
}


struct tnode* makeConstantStringNode(char *s,int len)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->left = NULL;
    temp->right = NULL;
    temp->mid = NULL;
    temp->varname=NULL;
    temp->type= strtype;
    temp->Gentry=NULL;
    temp->strval=(char *) malloc(sizeof(char)*len-2);
    strncpy(temp->strval,s+1,len-2);    //remove the " at beginning and end
    temp->nodetype=CONSTSTR;
    return temp;
}


struct tnode* makeVariableLeafNode(char *s,int len)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->varname= (char *) malloc(sizeof(char)*len);
    strcpy(temp->varname,s);   //ig its not vulnerable to bufferoverflow as length is properly set
    temp->left = NULL;
    temp->right = NULL;
    temp->mid = NULL;
    temp->type= voidtype;
    temp->Gentry=NULL;
    temp->strval=NULL;
    temp->nodetype=VAR;
    return temp;
}

struct tnode* makeOperatorNode(int c,struct tnode *l,struct tnode *r){
    
   // if(r->type!=inttype && l->type!=inttype){
   //     yyerror("Type Mismatch");
   //     exit(1);
   // }


    if(r->type!=l->type || r->type==booltype || l->type==booltype){
        printf("Type Mismatch %d : %d , Operator: %d \n",l->type,r->type,c);
        exit(1);
    }

    if(r->type==strtype && c!=EQUAL){
        printf("Invalid operation on string type.\n");
        exit(1);
    }



    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->nodetype=c;
    temp->left = l;
    temp->right = r;
    temp->mid= NULL;
    temp->varname=NULL;
    temp->Gentry=NULL;
    temp->strval=NULL;

    
    if(c==PLUS || c==MINUS || c==MUL ||  c==DIV || c==MOD)
        temp->type=inttype;
    else if(c==EQUAL)
        temp->type=voidtype;
    else
        temp->type=booltype;   //for boolean opertations

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
    temp->type=voidtype;
    temp->Gentry=NULL;
    temp->strval=NULL;
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
    temp->type=voidtype;
    temp->Gentry=NULL;
    temp->strval=NULL;
    return temp;
}

//for "if" and "while" constructs
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
    temp->type=voidtype;
    temp->Gentry=NULL;
    temp->strval=NULL;
    return temp;


}

//for 'break' and continue (they are leaf nodes)
struct tnode* makeNoChildNode(int c){
    
    struct tnode* temp;
    temp=(struct tnode*) malloc (sizeof(struct tnode));
    temp->nodetype=c;
    temp->left=NULL;
    temp->right=NULL;
    temp->mid=NULL;
    temp->varname=NULL;
    temp->type=voidtype;
    temp->Gentry=NULL;
    temp->strval=NULL;
    return temp;

}

//set the Gentry
void setGentry(tnode* node){

    Gsymbol *entry= Lookup(node->varname);
    if(entry==NULL){
        printf("Error: '%s' not declared\n",node->varname);
        exit(1);
    }
    node->Gentry=entry;
    node->type=entry->type;

}

void setArrayNode(tnode* node,tnode* indexnode){
    
    //indexnode could be a numnode,exprnode,varnode
   
    //set gentry
    Gsymbol *entry= Lookup(node->varname);
    if(entry==NULL){
        printf("Error: '%s' not declared\n",node->varname);
        exit(1);
    }
    node->Gentry=entry;
    node->type=entry->type;
    

    //Check for out of bounds only if it is a numnode
    if(indexnode->nodetype==CONSTNUM){

    //Check for out of bounds index
    if(indexnode->val>=0 && indexnode->val<entry->size)
        node->left=indexnode;
    else{
            printf("Array index is out of bounds, %s[%d] size=%d\n",
                   node->varname,indexnode->val,entry->size);
            exit(1);
        }
    }else {
        
        if(indexnode->type!=inttype){
            printf("Array index not int for %s\n",node->varname);
            exit(1);
        }

        node->left=indexnode;
    }


}





