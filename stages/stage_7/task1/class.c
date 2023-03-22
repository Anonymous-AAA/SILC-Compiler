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

int getClassTableIndex(){
    
    classTableIndex++;

    if(classTableIndex>=HB_SIZE){
        
        printf("Error : Class cannot have more than %d fields\n",HB_SIZE);
        exit(1);
    }
    
    return classTableIndex;

}


void checkDuplicateClassField(char *name){

    ClassFieldlist *temp=Cfstart;

    while(temp){
        if(strcmp(temp->name,name)==0){
            printf("Error : Class cannot have multiple fields with the same name (%s).\n",name);
            exit(1);
        }
        temp=temp->next;
    }
}


void checkDuplicateMethod(char *name){

    Memberfunclist *temp=Cmstart;

    while(temp){
        if(strcmp(temp->name,name)==0){
            printf("Error : Class cannot have multiple methods with the same name (%s).\n",name);
            exit(1);
        }
        temp=temp->next;
    }
}

ClassFieldlist *createClassField(char *name, char *typename){
    
    checkDuplicateClassField(name);

    ClassFieldlist *temp=(ClassFieldlist*) malloc(sizeof(ClassFieldlist));
    temp->name=name;

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

    if(type->size==UNDEFINED && ctype==NULL){
        printf("Error : Type %s is not defined",typename);
        exit(1);
    }

    temp->fieldindex=getClassTableIndex();
    temp->next=NULL;

    return temp;

}



void Class_Finstall(Classtable *cptr,char *typename,char *name){

    ClassFieldlist field=createClassField(name, typename);

    if(Cfstart==NULL){
        Cfstart=field;
    }else{
        Cfcurr->next=field;
    }
    Cfcurr=field;
    
}


Memberfunclist *createMemberFunc(char *name,Typetable *type, Paramstruct *Paramlist){

    checkDuplicateMethod(name);
    Memberfunclist *temp=(Memberfunclist*)malloc(sizeof(Memberfunclist));

    temp->name=name;
    temp->type=type;
    temp->paramlist=Paramlist;
    temp->funcposition=getClassFieldIndex();
    temp->next=NULL;
    
    return temp;

}


void Class_Minstall(Classtable *cptr,char *name, Typetable *type, Paramstruct *Paramlist){

    



}
