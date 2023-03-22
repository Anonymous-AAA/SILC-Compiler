#include "class.h"


Classtable *CLookup(char *name){

    Classtable *temp=Cstart;

    while(temp){
        
        if(strcmp(temp->name,name)==0)
            return temp;

        temp=temp->next;

    }

    return NULL;    //  if not exist
}



Classtable *CInstall(char *name,char *parent_class_name){


    if(CLookup(name)){
        printf("Error : Class %s is already defined",name);
        exit(1);
    }


    Classtable *temp=(Classtable *) malloc(sizeof(Classtable));

    temp->name=name;
    temp->parentptr=CLookup(parent_class_name);
    temp->memberfield=NULL;
    temp->vfuncptr=NULL;
    temp->fieldcount=0;
    temp->methodcount=0;
    temp->next=NULL;

    if(Cstart==NULL){
        Cstart=temp;
    }else{
        Ccurr->next=temp;
    }

    Ccurr=temp;

    return temp;
}

int getClassFieldIndex(){
    
    classFieldIndex++;

    if(classFieldIndex>=HB_SIZE){
        
        printf("Error : Class cannot have more than %d fields\n",HB_SIZE);
        exit(1);
    }
    
    return classFieldIndex;

}



ClassFieldlist *createClassField(char *name, char *typename){
    
    checkDuplicateClassField(name);

    ClassFieldlist *temp=(ClassFieldlist*) malloc(sizeof(ClassFieldlist));

    temp->name=name;

    temp->fieldindex=getClassFieldIndex();

    Typetable *type=TLookup(name);

    if(type->size!=UNDEFINED){
        temp->type=type;
    }else{
        temp->type=NULL;
    }

    Classtable *ctype=CLookup(name);

    if(ctype){
        temp->ctype=ctype;
    }else{
        temp->ctype=NULL;
    }

    temp->next=NULL;

    return temp;

}



void Class_Finstall(struct Classtable *cptr,char *typename,char *name){

    
    if(TLookup(typename)->size==UNDEFINED){    //checking whether the type is present in the type table


    }     



}


