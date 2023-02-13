//#include "symbol.h"
#include <string.h>

int getBinding(int size){
   
    int prevBinding=nextBinding;
    nextBinding+=size;
    return prevBinding;

}

 int getFlabel(){

    return Flabel++;

}



void setType(Gsymbol* node, int type){
    
    Gsymbol* temp=node;

    while(temp){
        temp->type=type;
        temp=temp->next;
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

Gsymbol *GInstallVar (char *name, int type, int size){

    //check whether name already exists, if so throw error
    if(GLookup(name)!=NULL){
        printf("Error: Identifier '%s' already in use. Use a different identifier name.\n",name);
        exit(1);

    }



    Gsymbol *temp= (Gsymbol*) malloc(sizeof(Gsymbol));
    temp->name=name;
    temp->type=type;
    temp->size=size;
    temp->binding=getBinding(size);
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



Gsymbol *GInstallFn(char *name,int type,Paramstruct *paramList){
    
    //check whether name already exists, if so throw error
    if(GLookup(name)!=NULL){
        printf("Error: Identifier '%s' already in use. Use a different identifier name.\n",name);
        exit(1);

    }

    Gsymbol *temp=(Gsymbol*) malloc(sizeof(Gsymbol));
    temp->name=name;
    temp->type=type;
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






Paramstruct *createParams(int type, char *name){

    Paramstruct *temp= (Paramstruct*) malloc(sizeof(Paramstruct));
    temp->name=name;
    temp->type=type;
    temp->next=NULL;

}

void createParamList(Paramstruct *param){

    PCurr->next=param;
    PCurr=PCurr->next;
}




void printSymbolTable(){

    Gsymbol *temp=Gstart;

    printf("Name Type Size Binding Flabel\n");

    while(temp){
        printf("%s %d %d %d %d  ",temp->name,temp->type,temp->size,temp->binding,temp->flabel);
        if(temp->paramlist){
            printf("ParamList : ");
            Paramstruct *p=temp->paramlist;
            while(p){
                printf("%d->%s ",p->type,p->name);
                p=p->next;
            }
        }
        printf("\n");
        temp=temp->next;
    }

}
