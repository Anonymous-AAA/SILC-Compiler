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

//int getClassTableIndex(){
//    
//    classTableIndex++;
//
//    if(classTableIndex>=HB_SIZE){
//        
//        printf("Error : Class cannot have more than %d fields\n",HB_SIZE);
//        exit(1);
//    }
//    
//    return classTableIndex;
//
//}


Memberfunclist *Class_Mlookup(Classtable *Ctype,char *name){
    
    Memberfunclist *temp=Ctype->vfuncptr;

    while(temp){

        if(strcmp(temp->name,name)==0)
            return temp;

        temp=temp->next;
    }

    return NULL;

}

ClassFieldlist *Class_Flookup(Classtable *Ctype,char *name){
    
    ClassFieldlist *temp=Ctype->memberfield;

    
    while(temp){

        if(strcmp(temp->name,name)==0)
            return temp;

        temp=temp->next;
    }

    return NULL;


}



ClassFieldlist *createClassField(char *name, char *typename){
    

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
        printf("Error : Type %s is not defined\n",typename);
        exit(1);
    }

//    temp->fieldindex=getClassTableIndex();
    temp->next=NULL;

    return temp;

}



void Class_Finstall(Classtable *cptr,char *typename,char *name){

    if(cptr->fieldcount==HB_SIZE){
        printf("Error : Class %s cannot have more than %d fields\n",cptr->name,HB_SIZE);
        exit(1);
    }


    if(Class_Flookup(cptr,name)){
            printf("Error : Class %s cannot have multiple fields with the same name (%s).\n",cptr->name,name);
            exit(1);
    }
    
    ClassFieldlist field=createClassField(name, typename);

    if(cptr->memberfield==NULL){
        cptr->memberfield=field;
    }else{
        Cfcurr->next=field;
    }
    Cfcurr=field;

    field->fieldindex=cptr->fieldcount;
    cptr->fieldcount++;
    
}


Memberfunclist *createMemberFunc(char *name,Typetable *type, Paramstruct *Paramlist){

    Memberfunclist *temp=(Memberfunclist*)malloc(sizeof(Memberfunclist));

    temp->name=name;
    temp->type=type;
    temp->paramlist=Paramlist;
//    temp->funcposition=getClassFieldIndex();
    temp->flabel=getFlabel();
    temp->next=NULL;
    
    return temp;

}


void Class_Minstall(Classtable *cptr,char *name, Typetable *type, Paramstruct *Paramlist){

    if(cptr->methodcount==HB_SIZE){
        printf("Error : Class %s cannot have more than %d methods\n",cptr->name,HB_SIZE);
        exit(1);
    }

    if(Class_Mlookup(cptr, name)){

            printf("Error : Class %s cannot have multiple methods with the same name (%s).\n",cptr->name,name);
            exit(1);
    }

    Memberfunclist method=createMemberFunc(name, type, Paramlist);

    
    if(cptr->vfuncptr==NULL){
        cptr->vfuncptr=method;
    }else{
        Cmcurr->next=method;
    }
    Cmcurr=method;

    method.funcposition=cptr->methodcount;
    cptr->methodcount++;

}
