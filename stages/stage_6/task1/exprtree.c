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
    temp->arglist=NULL;
    temp->Lentry=NULL;
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
    temp->val=NIL;
    temp->arglist=NULL;
    temp->Lentry=NULL;
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
    temp->val=NIL;
    temp->arglist=NULL;
    temp->Lentry=NULL;
    return temp;
}

struct tnode* makeOperatorNode(int c,struct tnode *l,struct tnode *r){
    
   // if(r->type!=inttype && l->type!=inttype){
   //     yyerror("Type Mismatch");
   //     exit(1);
   // }


    if(r->type!=l->type){
        printf("Error :Type Mismatch %d : %d , Operator: %d \n",l->type,r->type,c);
        exit(1);
    }

    //Both nodes are of the same type
    
   
    //check for void type (impossible)
    if(r->type==voidtype || l->type==voidtype){
        printf("DevError: voidtype detected\n");
        exit(1);
    }


    //Checking invalid operations on strings
    if(r->type==strtype && (c==PLUS || c==MINUS || c==MUL ||  c==DIV || c==MOD || c==AND || c==OR)){
        printf("Error: Invalid operation (%d) on string type.\n",c);
        exit(1);
    }

    //checking invalid operations on int
    if(r->type==inttype && (c==AND || c==OR)){

        printf("Error: Invalid operation (%d) on int type.\n",c);
        exit(1);
    }

    //checking invalid operations on bool
    if(r->type==booltype && !(c==AND || c==OR)){

        printf("Error: Invalid operation (%d) on bool type.\n",c);
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
    temp->val=NIL;
    temp->arglist=NULL;
    temp->Lentry=NULL;

    
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
    temp->val=NIL;
    temp->arglist=NULL;
    temp->Lentry=NULL;
    return temp;
}


//For read() ,write() , return
struct tnode* makeSingleNode(int c,struct tnode* node){
    
    //type checking if it is a MINUS node
    if(c==MINUS){
        if(node->type!=inttype){
            printf("Error: int type expected for '-', Found: %d",node->type);
            exit(1);
        }
    }



    struct tnode *temp;
    temp=(struct tnode *) malloc(sizeof(struct tnode));
    temp->nodetype=c;
    temp->left = node;
    temp->right = NULL;
    temp->mid = NULL;
    temp->varname = NULL;
    if(c==MINUS){
        temp->type=inttype;    
    }else {
        temp->type=voidtype;
    }
    temp->Gentry=NULL;
    temp->strval=NULL;
    temp->val=NIL;
    temp->arglist=NULL;
    temp->Lentry=NULL;
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
    temp->val=NIL;
    temp->arglist=NULL;
    temp->Lentry=NULL;
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
    temp->val=NIL;
    temp->arglist=NULL;
    temp->Lentry=NULL;
    return temp;

}


struct tnode* makeFnNode(char *name, tnode *arglist){


    Gsymbol *Gtemp=GLookup(name);

    //existence
    if(Gtemp==NULL){
        printf("Error : Function %s is not defined.\n",name);
        exit(1);
    }

    //Type Check parameters
    Paramstruct *Plist=Gtemp->paramlist;
    tnode *Alist=arglist;

    while(Plist && Alist){

        if(Plist->type!=Alist->type){
            printf("Error: Type mismatch of argument %s in function call with function definition.(%d : %d)",Alist->varname,Alist->type,Plist->type);
            exit(1);
        }

        Plist=Plist->next;
        Alist=Alist->mid;
    }

    //Count check parameters
    if(Plist!=NULL || Alist!=NULL){
        printf("Error : Unequal number of arguments in function call and function definition.\n");
        exit(1);
    }


    
    struct tnode* temp;
    temp=(struct tnode*) malloc (sizeof(struct tnode));
    temp->nodetype=FUNCTION;
    temp->varname=name;
    temp->type=Gtemp->type;
    temp->strval=NULL;
    temp->left=NULL;
    temp->right=NULL;
    temp->mid=NULL;
    temp->arglist=arglist;
    temp->Gentry=Gtemp;
    temp->Lentry=NULL;
    temp->val=NIL;

    return temp;

}








//set the Gentry and Lentry for local and global variables
void setEntry(tnode* node){

    Gsymbol *Gentry= GLookup(node->varname);
    Lsymbol *Lentry= LLookup(node->varname);
    if(Lentry==NULL && Gentry==NULL){
        printf("Error: '%s' not declared\n",node->varname);
        exit(1);
    }
    node->Gentry=Gentry;
    node->Lentry=Lentry;

    //Type priority is given to local var
    if(Lentry)
        node->type=Lentry->type;
    else 
        node->type=Gentry->type;

}

void setArrayNode(tnode* node,tnode* indexnode){
    
    //indexnode could be a numnode,exprnode,varnode
   
    //set gentry
    Gsymbol *entry= GLookup(node->varname);
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


//Attaching to arglist is done in a reverse fashion
void attachArg(tnode* arglist,tnode* arg){
    
    arg->mid=arglist;

}


void checkMain(){

//    //Check whether return statement exists or not
//    if(returnType==voidtype){
//
//        printf("Error: Return statement missing in function main.\n");
//        exit(1);
//    }

    if(returnType!=inttype){
        
        printf("Error: Return type of function main should be int.\n");
        exit(1);


    }

   //returntype not reinitizlized as main is the last function 

}





void checkFn(int type, char *name, Paramstruct *list){

    Gsymbol *entry= GLookup(name);


    
    if(entry){
    

        if(entry->size==DEFINED){
            printf("Error : Function '%s' is redefined\n",name);
            exit(1);
        }

        entry->size=DEFINED;  //Setting that the function is defined(using size attribute to store whether the function is already defined)
        
        //Checking if it is a variable  by checking whether binding exists
        if(entry->binding!=NIL){
            printf("Error : Variable '%s' found instead of function\n",name);
            exit(1);
        }

        if(entry->type!=type){
            printf("Error: Conflicting types for function '%s' in declaration and definition (%d:%d)\n",name,entry->type,type);
            exit(1);
        }

        Paramstruct *decl=list;
        Paramstruct *def=entry->paramlist;

        while(decl && def){
            
            if(strcmp(decl->name,def->name)!=0){
                printf("Error: Parameters of function '%s' have different names in declaration and definition (%s : %s)\n",name,decl->name,def->name);
                exit(1);
            }

            if(decl->type!=def->type){
                printf("Error: Parameter '%s' of function '%s' have different types in declaration and definiton (%d : %d)\n",decl->name,name,decl->type,def->type);
                exit(1);
            }

            decl=decl->next;
            def=def->next;

        }

        if(decl!=NULL || def!=NULL){

            printf("Error: Number of parameters of function '%s' does not match in declaration and definiton.\n",name);
            exit(1);
        }


//        //Check whether return statement exists or not
//        if(returnType==voidtype){
//
//            printf("Error: Return statement missing in function '%s'\n",name);
//            exit(1);
//        }
//



        //checking whether the value returned by the return statement is same as the return type
        if(returnType!=type){

            printf("Error: The type of value returned by the function '%s' does not match with the return type (%d : %d)\n",name,returnType,type);
            exit(1);
        }


    }else{
        
        printf("Function '%s' is not declared\n",name);
        exit(1);

    }

    returnType=voidtype;

}


//void checkReturnType(int type){
//    
//    if(returnType==voidtype)
//        returnType=type;
//    else if(type!=returnType){
//        
//        printf("Error : Multiple return types within a single function\n");
//        exit(1);
//        
//    }
//
//
//}

void deallocateAST(tnode *node){
    
    if(node){

    deallocateAST(node->left);
    deallocateAST(node->right);
    deallocateAST(node->mid);
    free(node);
    }

}
