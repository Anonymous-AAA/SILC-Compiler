#include "y.tab.h"
#include "type.h"
#include "class.h"
#include "exprtree.h"
#include "symbol.h"
#include "symbol.c"
#include "type.c"
#include "class.c"
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
    temp->ctype=NULL;
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
    temp->ctype=NULL;
    temp->Gentry=NULL;
    temp->strval=(char *) malloc(sizeof(char)*(len-1));     //reserve space for null terminator
    strncpy(temp->strval,s+1,len-2);    //remove the " at beginning and end
    temp->strval[len-2]='\0';           //terminating the string with null char
    temp->nodetype=CONSTSTR;
    temp->val=NIL;
    temp->arglist=NULL;
    temp->Lentry=NULL;
    return temp;
}


struct tnode* makeNullNode()
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->val = NIL;
    temp->left = NULL;
    temp->right = NULL;
    temp->mid = NULL;
    temp->varname=NULL;
    temp->type= nulltype;
    temp->ctype=NULL;
    temp->Gentry=NULL;
    temp->strval=NULL;
    temp->nodetype=NUL;
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
    temp->ctype=NULL;
    temp->Gentry=NULL;
    temp->strval=NULL;
    temp->nodetype=VAR;
    temp->val=NIL;
    temp->arglist=NULL;
    temp->Lentry=NULL;
    return temp;
}


int isUserDefinedType(tnode *node){


    if(node->type==inttype || node->type==strtype || node->type==booltype || node->type==voidtype || node->type==nulltype)
        return FALSE;
    else
        return TRUE;


}

struct tnode* makeOperatorNode(int c,struct tnode *l,struct tnode *r){
    
    if(l->type!=r->type){

        if(l->type==inttype || l->type==strtype || l->type==booltype || (l->type==voidtype && l->ctype==NULL) || l->type==nulltype){

            printf("Error : Type Mismatch (%s : %s) , Operator: %d \n",l->type->name,r->type->name,c);
            exit(1);

        }

        if(r->type!=nulltype){

            printf("Error : Type Mismatch (%s : %s) , Operator: %d \n",l->type->name,r->type->name,c);
            exit(1);

        }

        if(r->nodetype==ALLOC){
            //Type inference
            r->type=l->type;
        }
    }

    //Both nodes are of the same type (other than user defined)
    
   
    //check for void type (impossible)
   // if(r->type==voidtype || l->type==voidtype){
   //     printf("DevError: voidtype detected\n");
   //     exit(1);
   // }


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

    //invalid operations on user defined types
    if(isUserDefinedType(l)==TRUE && (c!=EQUAL && c!=EQ && c!=NE)){

        printf("Error: Invalid operation (%d) on '%s' type.\n",c,l->type->name);
        exit(1);

    }

    if((l->type==voidtype) != (r->type==voidtype)){

        if(!(l->ctype && r->type==nulltype)){

        printf("Error : Invalid operator (%d) on type and class variables\n",c);
        exit(1);

        }

    }

    //class types
    if(l->type==voidtype && r->type==voidtype){
        
        if(l->ctype!=r->ctype){
            printf("Error : Operands should be of the same class (%s:%s)\n",l->ctype->name,r->ctype->name);
            exit(1);
        }

        if(c!=EQUAL && c!=EQ && c!=NE){
            printf("Error: Invalid operation (%d) on '%s' type.\n",c,l->ctype->name);
            exit(1);
        }


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
    temp->ctype=NULL;

    
    if(c==PLUS || c==MINUS || c==MUL ||  c==DIV || c==MOD)
        temp->type=inttype;
    else if(c==EQUAL)
        temp->type=voidtype;
    else
        temp->type=booltype;   //for boolean opertations

    return temp;
}

struct tnode* makeConnectorNode(struct tnode *l,struct tnode *r){

    if(l==NULL)     //connector node not required if  left node is null
        return r;

    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->nodetype=CONNECTOR;
    temp->left = l;
    temp->right = r;
    temp->mid = NULL;
    temp->varname=NULL;
    temp->type=voidtype;
    temp->ctype=NULL;
    temp->Gentry=NULL;
    temp->strval=NULL;
    temp->val=NIL;
    temp->arglist=NULL;
    temp->Lentry=NULL;
    return temp;
}


//For read() ,write() , return, free()
struct tnode* makeSingleNode(int c,struct tnode* node){
    
    //type checking if it is a MINUS node
    if(c==MINUS){
        if(node->type!=inttype){
            printf("Error: int type expected for '-', Found: %s\n",node->type->name);
            exit(1);
        }
    }

    if(c==READ || c==WRITE){

        if(node->type!=inttype && node->type!=strtype){
            printf("Error: Invalid type '%s' for read/write (%d)\n",node->type->name,c);
            exit(1);
        }
    }

    if(c==FREE){
        
        if(isUserDefinedType(node)==FALSE){
            printf("Error: Invalid type '%s' for free. User defined type expected.\n",node->type->name);
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
    temp->ctype=NULL;
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
       printf("Error : Condition is not boolean (%d)\n",c);
       exit(1);
    }

    if(r==NULL){
       printf("Error : No statements inside IF/WHILE block\n");
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
    temp->ctype=NULL;
    temp->Gentry=NULL;
    temp->strval=NULL;
    temp->val=NIL;
    temp->arglist=NULL;
    temp->Lentry=NULL;
    return temp;


}

//for break,continue,breakpoint,initialize() and alloc (they are leaf nodes)
struct tnode* makeNoChildNode(int c){
    
    struct tnode* temp;
    temp=(struct tnode*) malloc (sizeof(struct tnode));
    temp->nodetype=c;
    temp->left=NULL;
    temp->right=NULL;
    temp->mid=NULL;
    temp->varname=NULL;
    temp->type=voidtype;
    temp->ctype=NULL;
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
            printf("Error: Type mismatch of argument ('%s') in the function call of '%s'  with arguments in function definition (%s : %s).\n",Alist->varname?Alist->varname:"constant",name,Alist->type->name,Plist->type->name);
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
    temp->ctype=NULL;
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

//field node for user defined variables
struct tnode* makeFieldNode(int fieldIndex){


    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->val = fieldIndex;
    temp->left = NULL;
    temp->right = NULL;
    temp->mid = NULL;
    temp->varname=NULL;
    temp->type= voidtype;
    temp->ctype=NULL;
    temp->Gentry=NULL;
    temp->strval=NULL;
    temp->nodetype=FIELD;
    temp->arglist=NULL;
    temp->Lentry=NULL;
    return temp;

}







//set the Gentry and Lentry for local and global variables
void setEntry(tnode* node){

    Gsymbol *Gentry=NULL;
    Lsymbol *Lentry=NULL;

    if(node->nodetype==SELF){
        Lentry=LLookup("self");
    }else{

        Gentry= GLookup(node->varname);
        Lentry= LLookup(node->varname);
    }

    if(Lentry==NULL && Gentry==NULL){
        printf("Error: '%s' not declared\n",node->varname);
        exit(1);
    }
    node->Gentry=Gentry;
    node->Lentry=Lentry;

    //Type priority is given to local var
    if(Lentry){
        node->type=Lentry->type;
        if(Lentry->type==selftype)
            node->ctype=Ccurr;
    }
    else {
        node->type=Gentry->type;
        node->ctype=Gentry->ctype;
        }

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
            printf("Error : Array index is out of bounds, %s[%d] size=%d\n",
                   node->varname,indexnode->val,entry->size);
            exit(1);
        }
    }else {
        
        if(indexnode->type!=inttype){
            printf("Error : Array index not int for %s\n",node->varname);
            exit(1);
        }

        node->left=indexnode;
    }


}


//Attaching to arglist is done in a reverse fashion
void attachArg(tnode* arglist,tnode* arg){
    
    arg->mid=arglist;

}


void checkMain(Typetable *returnType){

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





void checkFn(Typetable *type,Typetable *returnType,char *name, Paramstruct *list){

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
            printf("Error: Conflicting types for function '%s' in declaration and definition (%s:%s)\n",name,entry->type->name,type->name);
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
                printf("Error: Parameter '%s' of function '%s' have different types in declaration and definiton (%s : %s)\n",decl->name,name,decl->type->name,def->type->name);
                exit(1);
            }

            decl=decl->next;
            def=def->next;

        }

        if(decl!=NULL || def!=NULL){

            printf("Error: Number of parameters of function '%s' does not match in declaration and definiton.\n",name);
            exit(1);
        }


        //checking whether the value returned by the return statement is same as the return type
        if(returnType!=type && !(isUserType(type) && returnType==nulltype)){

            printf("Error: The type of value returned by the function '%s' does not match with the return type (%s : %s)\n",name,returnType->name,type->name);
            exit(1);
        }


    }else{
        
        printf("Error : Function '%s' is not declared\n",name);
        exit(1);

    }


}


void checkMethod(Typetable *type,Typetable *returnType,char *name, Paramstruct *list){

    Memberfunclist *entry= Class_Mlookup(Ccurr,name);


    
    if(entry){
    

        if(entry->defined==DEFINED){
            printf("Error : Method '%s' is redefined in class %s\n",name,Ccurr->name);
            exit(1);
        }

        entry->defined=DEFINED;  //Setting that the function is defined(using size attribute to store whether the function is already defined)
        

        if(entry->type!=type){
            printf("Error: Conflicting types for method '%s' in declaration and definition in class %s (%s:%s)\n",name,Ccurr->name,entry->type->name,type->name);
            exit(1);
        }

        Paramstruct *decl=list;
        Paramstruct *def=entry->paramlist;

        while(decl && def){
            
            if(strcmp(decl->name,def->name)!=0){
                printf("Error: Parameters of method '%s' have different names in declaration and definition in class %s (%s : %s)\n",name,Ccurr->name,decl->name,def->name);
                exit(1);
            }

            if(decl->type!=def->type){
                printf("Error: Parameter '%s' of method '%s' have different types in declaration and definiton in class %s (%s : %s)\n",decl->name,name,Ccurr->name,decl->type->name,def->type->name);
                exit(1);
            }

            decl=decl->next;
            def=def->next;

        }

        if(decl!=NULL || def!=NULL){

            printf("Error: Number of parameters of method '%s' does not match in declaration and definiton in class %s.\n",name,Ccurr->name);
            exit(1);
        }


        //checking whether the value returned by the return statement is same as the return type
        if(returnType!=type && !(isUserType(type) && returnType==nulltype)){

            printf("Error: The type of value returned by the method '%s' does not match with the return type in class %s (%s : %s)\n",name,Ccurr->name,returnType->name,type->name);
            exit(1);
        }


    }else{
        
        printf("Error : Method '%s' is not declared in class '%s'\n",name,Ccurr->name);
        exit(1);

    }


}

void deallocateAST(tnode *node){
    
    if(node){

    deallocateAST(node->left);
    deallocateAST(node->right);
    deallocateAST(node->mid);
    free(node);
    }

}

void setField(tnode *var,tnode *id){
    
    //setting gentry and/or lentry if not set
    if(!(var->Lentry || var->Gentry))  
        setEntry(var);
    
    if(var->ctype!=NULL && var->nodetype!=SELF){
        printf("Error : Member fields are private to the class(%s.%s)\n",var->varname,id->varname);
        exit(1);
    }


    if(var->ctype){

        Classtable *ctype=var->ctype;
        ClassFieldlist *cfield=Class_Flookup(ctype, id->varname);


        if(cfield==NULL){
            printf("Error : '%s' is not a field in class '%s' of variable '%s'\n",id->varname,ctype->name,var->varname?var->varname:"self");
            exit(1);
        }

        var->ctype=cfield->ctype;
        var->type=cfield->type;

    
        //setting the field node at the end of the field node chain
        while(var->left)
            var=var->left;

        var->left=makeFieldNode(cfield->fieldindex);

    
        //freeing the unwanted id node
        free(id);

    }else{

        Typetable *type=var->type;


        Fieldlist *field=FLookup(type,id->varname);

        if(field==NULL){
            printf("Error : '%s' is not a field in type '%s' of variable '%s'\n",id->varname,type->name,var->varname);
            exit(1);
        }

        //setting the type
        var->type=field->type;

        //setting the field node at the end of the field node chain
        while(var->left)
            var=var->left;

        var->left=makeFieldNode(field->fieldIndex);

        
        //freeing the unwanted id node
        free(id);
    } 


    

}

void checkInvalidTypes(tnode* type){

    if(strcmp(type->varname,"bool")==0 || strcmp(type->varname,"void")==0){
        printf("Error : Invalid type '%s'\n",type->varname);
        exit(1);
    }
}


void setMethodNode(tnode *obj,char *name, tnode *arglist){


    if(!(obj->Lentry || obj->Gentry))  
        setEntry(obj);


   // if(obj->nodetype==SELF)
   //     obj->ctype=Ccurr;
   // else if(obj->nodetype==VAR)
   //     obj->ctype=CLookup(obj->varname);
   // else{
   //         if(!obj->ctype){
   //             printf("DevError: ctype not set on field\n");
   //             exit(1);
   //         }

   // }

    if(obj->ctype==NULL){
        printf("Error : %s is not defined in class %s\n",obj->varname,Ccurr->name);
        exit(1);
    }


    Memberfunclist *Mtemp=Class_Mlookup(obj->ctype,name);

    //existence
    if(Mtemp==NULL){
        printf("Error : Method %s is not defined in class %s.\n",name,obj->ctype->name);
        exit(1);
    }

    //Type Check parameters
    Paramstruct *Plist=Mtemp->paramlist;
    tnode *Alist=arglist;

    while(Plist && Alist){

        if(Plist->type!=Alist->type){
            printf("Error: Type mismatch of argument ('%s') in the function call of '%s'  with arguments in function definition (%s : %s).\n",Alist->varname?Alist->varname:"constant",name,Alist->type->name,Plist->type->name);
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


    //setting object to funcvar type
    obj->nodetype=FUNCVAR;
    
    struct tnode* temp;
    temp=(struct tnode*) malloc (sizeof(struct tnode));
    temp->nodetype=FUNCFIELD;
    temp->varname=name;
    temp->type=Mtemp->type;
    temp->ctype=NULL;
    temp->strval=NULL;
    temp->left=NULL;
    temp->right=NULL;
    temp->mid=NULL;
    temp->arglist=arglist;
    temp->Gentry=NULL;
    temp->Lentry=NULL;
    temp->val=Mtemp->flabel;   //temp->val contains the func position in the virtual function table

    obj->type=temp->type;

    while(obj->left)
        obj=obj->left;

    obj->left=temp;

}


//void makeClassMembersNode(tnode *self, tnode *id1, tnode *id2, tnode *arglist){
//
//    if(Ccurr==NULL){
//        printf("Error : 'self' keyword can only be used inside the class\n");
//        exit(1);
//    }
//
//    setEntry(self);
//    
//    if(arglist==NULL && id1->type==voidtype){   //self.id
//        
//        ClassFieldlist *temp=Class_Flookup(Ccurr,id1->varname);
//
//        if(temp){
//            self->left=id1;
//            self->type=temp->type;
//            self->ctype=temp->ctype;
//            id1->nodetype=FIELD;  //converting the node to a field node
//            id1->val=temp->fieldindex;
//
//        }else{
//            printf("Error : %s is not a field of class %s\n",id1->varname,Ccurr->name);
//            exit(1);
//        }
//
//
//    }else if(arglist==NULL && id1->type!=voidtype){   //self.field
//
//        self->left=id1;
//        self->type=id1->type;
//        id1->nodetype=FIELD;   //converting the node to a field node
//        //field index  is set from the setfield function itself
//
//    }else if(id2==NULL){       //self.id(arglist)
//        
//        tnode *method= makeMethodNode(id1->varname, arglist,Ccurr);
//        self->left=method;
//        self->type=method->type;
//    }
//    else{                           //self.id.id(arglist)
//
//        ClassFieldlist *temp=Class_Flookup(Ccurr,id1->varname);
//
//        if(temp==NULL){
//            printf("Error : %s is not a field of class %s\n",id1->varname,Ccurr->name);
//            exit(1);
//        }
//
//        if(temp->ctype==NULL){
//            printf("Error : %s is of type %s which has no methods.\n",id1->varname,temp->type->name);
//            exit(1);            
//        }
//
//
//        self->left=id1;
//        id1->nodetype=FIELD;  //converting the node to a field node
//        id1->val=temp->fieldindex;
//
//
//        tnode *method= makeMethodNode(id2->varname, arglist,temp->ctype);
//        id1->left=method;
//        self->type=method->type;
//
//    }
//    
//}

