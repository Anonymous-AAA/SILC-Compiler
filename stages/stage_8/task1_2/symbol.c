//#include "symbol.h"
#include <string.h>

int getGBinding(int size){
   
    int prevGBinding=nextGBinding;
    nextGBinding+=size;
    return prevGBinding;

}

int getArgLBinding(){   //Get binding for arguments of the function
   
    int prevLBinding=nextArgLBinding;
    nextArgLBinding--;
    return prevLBinding;

}

int getLocLBinding(){   //Get binding for local variables of the function
   
    int prevLBinding=nextLocLBinding;
    nextLocLBinding++;
    return prevLBinding;

}

 int getFlabel(){

    return Flabel++;

}



void setGType(Gsymbol* node, Typetable *type){
    
    Gsymbol *temp=node;

    if(type->size!=UNDEFINED){    //normal type

        while(temp){
            temp->type=type;
            temp->binding=getGBinding(temp->size);
            temp=temp->next;
        }
    }
    else{                       //normal ctype
        
        Classtable *ctype=CLookup(type->name);

        while(temp){
            temp->ctype=ctype;
            temp->size=2;
            temp->binding=getGBinding(2);
            temp=temp->next;
        }

    }

}



Gsymbol *GLookup(char *name){

    Gsymbol *temp=Gstart;

    while(temp){
        
        if(strcmp(name,temp->name)==0)
            return temp;

        temp=temp->next;
    }

    return NULL;
} 

Gsymbol *GInstallVar (char *name, Typetable *type, int size){

    //check whether name already exists, if so throw error
    if(GLookup(name)!=NULL){
        printf("Error: Global identifier '%s' already in use. Use a different identifier name for variable.\n",name);
        exit(1);

    }



    Gsymbol *temp= (Gsymbol*) malloc(sizeof(Gsymbol));
    temp->name=name;
    temp->type=type;
    temp->ctype=NULL;
    temp->size=size;
    //temp->binding=getGBinding(size);
    temp->binding=NIL;  //binding will be set at setGType()
    temp->flabel=NIL;
    temp->next=NULL;
    temp->paramlist=NULL;

    if(Gstart==NULL){
        Gstart=temp;
    }else{
       Gcurr->next=temp;
    }

    Gcurr=temp;
    return temp;  //returning the node 
}


void deallocateLST(){
  
    Lsymbol *temp=Lstart;
    Lsymbol *curr;


    while(temp){

        curr=temp;
        temp=temp->next;
        free(curr);

    }


    Lstart=NULL;
    Lcurr=NULL;
    nextArgLBinding= -3;     //resetting the binding
    nextLocLBinding= 1;     //resetting the binding

}

Gsymbol *GInstallFn(char *name,Typetable *type,Paramstruct *paramList){
    
    //Deallocating the unwanted LST generated (is there a better way?)
    deallocateLST();

    //check whether name already exists, if so throw error
    if(GLookup(name)!=NULL){
        printf("Error: Global identifier '%s' already in use. Use a different identifier name for the function.\n",name);
        exit(1);

    }

    Gsymbol *temp=(Gsymbol*) malloc(sizeof(Gsymbol));
    temp->name=name;
    temp->type=type;
    temp->ctype=NULL;
    temp->size=NIL;
    temp->binding=NIL;
    temp->paramlist=paramList;
    temp->next=NULL;
    temp->flabel=getFlabel();

    if(Gstart==NULL){
        Gstart=temp;
    }else{
       Gcurr->next=temp;
    }

    Gcurr=temp;
    return temp;  //returning the node 



}


Lsymbol *LLookup(char *name){

    Lsymbol *temp=Lstart;

    while(temp){
        
        if(strcmp(name,temp->name)==0)
            return temp;

        temp=temp->next;
    }

    return NULL;
} 


Lsymbol *LInstallVar (char *name, Typetable *type, int isArg){

    //check whether name already exists, if so throw error
    if(LLookup(name)!=NULL){

        //for debug
        //Lsymbol *temp=Lstart;
        //while(temp){
        //    printf("%s\n",temp->name);
        //    temp=temp->next;
        //}

        //for debug

        printf("Error: Local identifier '%s' already in use. Use a different identifier name for variable.\n",name);
        exit(1);

    }



    Lsymbol *temp= (Lsymbol*) malloc(sizeof(Lsymbol));
    temp->name=name;
    temp->type=type;
    if(isArg==TRUE)
        temp->binding=getArgLBinding(); //will have to  change here  , size is set to 1
    else
        temp->binding=getLocLBinding();
    temp->next=NULL;

    if(Lstart==NULL){
        Lstart=temp;
    }else{
       Lcurr->next=temp;
    }

    Lcurr=temp;
    return temp;  //returning the node 
}

void LInstallSelf(Classtable *ctype){

    Lsymbol *temp= (Lsymbol*) malloc(sizeof(Lsymbol));
    temp->name=(char *) malloc(sizeof(char)*5);
    strcpy(temp->name,"self");
    temp->type=selftype;
    temp->binding=getArgLBinding();    //need to change this
    temp->next=NULL;

    if(Lstart==NULL){
        Lstart=temp;
    }else{
       Lcurr->next=temp;
    }

    Lcurr=temp;
}


void setLType(Lsymbol* node, Typetable *type){
    
    Lsymbol* temp=node;

    while(temp){
        temp->type=type;
        temp=temp->next;
    }

}

Paramstruct *createParams(Typetable *type, char *name){

    Paramstruct *temp= (Paramstruct*) malloc(sizeof(Paramstruct));
    temp->name=name;
    temp->type=type;
    temp->next=NULL;

    //Adding parameters to the symbol table 
    LInstallVar(name,type,TRUE);  //True because they are the args

    return temp;

}

void createParamList(Paramstruct *plist,Paramstruct *param){

//    PCurr->next=param;
  //  PCurr=PCurr->next;
    param->next=plist;
}


//void addParamstoLST(Paramstruct *list){
//
//    Paramstruct *temp=list;
//
//    while(temp){
//        
//        LInstallVar(temp->name,temp->type);
//        temp=temp->next;
//    }
//
//}


void printLSymbolTable(char *fname){

    Lsymbol *temp=Lstart;

    printf("%s:\n",fname);
    printf("Name Type Binding\n");

    while(temp){
        printf("%s %s %d\n",temp->name,temp->type->name,temp->binding);
        temp=temp->next;
    }
    printf("\n");

}


void printGSymbolTable(){

    Gsymbol *temp=Gstart;

    printf("Global:\n");
    printf("Name Type CType Size Binding Flabel\n");

    while(temp){
        printf("%s %s %s %d %d %d  ",temp->name,temp->type->name,temp->ctype?temp->ctype->name:"No ctype",temp->size,temp->binding,temp->flabel);
        if(temp->paramlist){
            printf("ParamList : ");
            Paramstruct *p=temp->paramlist;
            while(p){
                printf("%s->%s ",p->type->name,p->name);
                p=p->next;
            }
        }
        printf("\n");
        temp=temp->next;
    }
    printf("\n");

}
