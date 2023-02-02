//#include "symbol.h"
#include <string.h>

int getBinding(){
    
    nextBinding++;
    return nextBinding;

}


void setType(Gsymbol* node, int type){
    
    Gsymbol* temp=node;

    while(temp){
        temp->type=type;
        temp=temp->next;
    }

}



Gsymbol *Lookup(char *name){

    Gsymbol *temp=start;

    while(temp){
        
        if(strcmp(name,temp->name)==0)
            return temp;

        temp=temp->next;
    }

    return NULL;
} 

Gsymbol *Install (char *name, int type, int size){

    //check whether name already exists, if so throw error
    if(Lookup(name)!=NULL){
        printf("Error: Redeclaration of variable. '%s' already exists\n",name);
        exit(1);

    }



    Gsymbol *temp= (Gsymbol*) malloc(sizeof(Gsymbol));
    temp->name=name;
    temp->type=type;
    temp->size=size;
    temp->binding=getBinding();
    temp->next=NULL;

    if(start==NULL){
        start=temp;
    }else{
       curr->next=temp;
    }

    curr=temp;
    return temp;  //returning the node 
}



void printSymbolTable(){

    Gsymbol *temp=start;

    while(temp){
        printf("%s %d %d %d\n",temp->name,temp->type,temp->size,temp->binding);
        temp=temp->next;
    }

}
