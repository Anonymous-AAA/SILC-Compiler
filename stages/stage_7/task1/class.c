

Classtable *CLookup(char *name){

    if(name==NULL)
        return NULL;

    Classtable *temp=Cstart;

    while(temp){
        if(strcmp(temp->name,name)==0)
            return temp;

        temp=temp->next;
    }
    return NULL;    //  if not exist
}


int getClassIndex(){
    
    classIndex++;
    return classIndex;
}

Classtable *CInstall(char *name,char *parent_class_name){


    if(CLookup(name)){
        printf("Error : Class %s is already defined\n",name);
        exit(1);
    }

    if(TLookup(name)->size!=UNDEFINED){
        printf("Error : A type %s is already defined, so a class cannot have the same name\n",name);
        exit(1);
    }


    Classtable *temp=(Classtable *) malloc(sizeof(Classtable));

    temp->name=name;
    temp->parentptr=CLookup(parent_class_name);
    temp->class_index=getClassIndex();
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

    Typetable *type=TLookup(typename);

    if(type->size!=UNDEFINED){
        temp->type=type;
    }else{
        temp->type=voidtype;
    }

    Classtable *ctype=CLookup(typename);

    if(ctype){
        temp->ctype=ctype;
    }else{
        temp->ctype=NULL;
    }

    if(type->size==UNDEFINED && ctype==NULL){
        printf("Error : Type %1$s is not defined (%1$s %2$s)\n",typename,name);
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
    
    ClassFieldlist *field=createClassField(name, typename);

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
    temp->flabel=getFlabel();
    temp->defined=NIL;
    temp->next=NULL;
    
    return temp;

}


void Class_Minstall(Classtable *cptr,char *name, Typetable *type, Paramstruct *Paramlist){

    deallocateLST();    //creation of ParamList leads to filling of LST, this deallocates that.

    
    if(type->size==UNDEFINED){
        printf("Error : Return type %s is not defined for function %s",type->name,name);
        exit(1);       
    }


    if(cptr->methodcount==HB_SIZE){
        printf("Error : Class %s cannot have more than %d methods\n",cptr->name,HB_SIZE);
        exit(1);
    }

    if(Class_Mlookup(cptr, name)){

            printf("Error : Class %s cannot have multiple methods with the same name (%s).\n",cptr->name,name);
            exit(1);
    }

    if(Class_Flookup(cptr,name)){
            printf("Error : Class %s cannot have methods and member fields with the same name (%s).\n",cptr->name,name);
            exit(1);
    }

    Memberfunclist *method=createMemberFunc(name, type, Paramlist);

    
    if(cptr->vfuncptr==NULL){
        cptr->vfuncptr=method;
    }else{
        Cmcurr->next=method;
    }
    Cmcurr=method;

    method->funcposition=cptr->methodcount;
    cptr->methodcount++;

}

void printClassTable(){

    printf("Class Table\n");
    Classtable *temp=Cstart;

    while(temp){
        
        printf("Index : %d\n",temp->class_index);
        printf("Name : %s\n\n",temp->name);

        printf("Class Fields\n");
        ClassFieldlist *field=temp->memberfield;
        while(field){
            printf("    Name : %s\n",field->name);
            printf("    FieldIndex : %d\n",field->fieldindex);
            printf("    Type : %s\n",field->type?field->type->name:"No type");
            printf("    CType : %s\n\n",field->ctype?field->ctype->name:"No ctype");
            field=field->next;
        }

        printf("Methods\n");
        Memberfunclist *method=temp->vfuncptr;
        while(method){
            printf("    Name : %s\n",method->name);
            printf("    Type : %s\n",method->type->name);
            Paramstruct *param=method->paramlist;
            printf("    Parameters:\n");
            while(param){
                printf("        %s  %s\n",param->type->name,param->name);        
                param=param->next;
            }
            printf("    Funcposition : %d\n",method->funcposition);
            printf("    Flabel : %d\n\n",method->flabel);
            method=method->next;
        }

        printf("Parent Class : %s\n",temp->parentptr?temp->parentptr->name:"None");
        printf("Field Count : %d\n",temp->fieldcount);
        printf("Method Count : %d\n\n",temp->methodcount);

        temp=temp->next;


    }



}
