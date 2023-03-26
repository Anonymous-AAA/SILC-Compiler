
//Function to initialise the type table entries with primitive types (int,str) and special entries_(boolean,null,void).
void TypeTableCreate(){

    Typetable *entry=(Typetable*) malloc(sizeof(Typetable));
    Tstart=entry;   //setting the start of TypeTable

    //int
    entry->name=(char *) malloc(sizeof(char)*4);
    strcpy(entry->name,"int");
    entry->size=1;
    entry->fields=NULL;
    inttype=entry;

    entry->next=(Typetable*) malloc(sizeof(Typetable));
    entry=entry->next;

    //str
    entry->name=(char *) malloc(sizeof(char)*4);
    strcpy(entry->name,"str");
    entry->size=1;
    entry->fields=NULL;
    strtype=entry;


    entry->next=(Typetable*) malloc(sizeof(Typetable));
    entry=entry->next;

    //boolean
    entry->name=(char *) malloc(sizeof(char)*5);
    strcpy(entry->name,"bool");
    entry->size=1;
    entry->fields=NULL;
    booltype=entry;


    entry->next=(Typetable*) malloc(sizeof(Typetable));
    entry=entry->next;

    //null
    entry->name=(char *) malloc(sizeof(char)*5);
    strcpy(entry->name,"null");
    entry->size=1;
    entry->fields=NULL;
    nulltype=entry;


    entry->next=(Typetable*) malloc(sizeof(Typetable));
    entry=entry->next;

    //void
    entry->name=(char *) malloc(sizeof(char)*5);
    strcpy(entry->name,"void");
    entry->size=1;
    entry->fields=NULL;
    voidtype=entry;

    entry->next=(Typetable*) malloc(sizeof(Typetable));
    entry=entry->next;

    //self
    entry->name=(char *) malloc(sizeof(char)*5);
    strcpy(entry->name,"self");
    entry->size=1;
    entry->fields=NULL;
    selftype=entry;

    Tcurr=entry;    //setting the current entry
}


void printTypeTable(){

    printf("TypeTable\n");
    Typetable *temp=Tstart;

    while(temp){
        printf("%s  %d  fields: ",temp->name,temp->size);
        Fieldlist *ftemp=temp->fields;

        while(ftemp){
            printf("%s-->%d  %s, ",ftemp->name,ftemp->fieldIndex,ftemp->type->name);
            ftemp=ftemp->next;
        }

        printf("\n");

        temp=temp->next;
    }

    printf("\n");



}

//Search through the type table and return pointer to type table entry of type 'name'. Returns NULL if entry is not found.
Typetable* TLookup(char* name){

    Typetable* temp=Tstart;

    while(temp){
        
        if(strcmp(temp->name,name)==0)
            return temp;

        temp=temp->next;

    }
     
    //printf("Error : Type '%s' is not declared\n",name);
    //exit(1);

    //return null if entry not found
    //return NULL;

    //return a temp type if type not found
    temp= (Typetable*) malloc(sizeof(Typetable));
    temp->name=name;
    temp->size=UNDEFINED;   //as a marker for an undefined type (this is done to allow recursive defintion of types)
    temp->fields=NULL;
    temp->next=NULL;

    return temp;

}


Typetable* TInstall(char *name,Fieldlist *fields){

    if(TLookup(name)->size!=UNDEFINED){
        printf("Error : Type '%s' is already defined\n",name);
        exit(1);
    }

    Typetable* temp= (Typetable*) malloc(sizeof(Typetable));

    //Checking for undefined fields 
    Fieldlist *ftemp=fields;

    while(ftemp){
        
        if(ftemp->type->size==UNDEFINED){

            if(strcmp(ftemp->type->name,name)==0){
                free(ftemp->type);   //freeing the temp type
                ftemp->type=temp;
            }else{
                printf("Error : Type '%s' is not defined\n",ftemp->type->name);
                exit(1);
            }
        
        }

        ftemp=ftemp->next;
    }




    temp->name=name;
    temp->size=fieldIndex+1;   //fieldIndex+1 gives the size
    temp->fields=fields;
    temp->next=NULL;

    //Tcurr cannot be null as there are predefined types
    Tcurr->next=temp;
    Tcurr=temp;


    //Reset fcurr and fstart
    Fcurr=NULL;
    Fstart=NULL;

    //Reset fieldIndex
    fieldIndex=-1;
    

    return temp;

}

Fieldlist* FLookup(Typetable *type,char *name){
    
    Fieldlist *temp=type->fields;

    while(temp){
        
        if(strcmp(temp->name,name)==0)
            return temp;

        temp=temp->next;
    }

    return NULL;
}

int GetSize(Typetable *type){

    return type->size;
}

int getfieldIndex(){
    
    fieldIndex++;
    if(fieldIndex>=HB_SIZE){
        printf("Error : Type cannot have more than %d fields\n",HB_SIZE);
        exit(1);
    }
    return fieldIndex;
    
}


void checkDuplicateField(char *name){

    Fieldlist *temp=Fstart;

    while(temp){
        
        if(strcmp(temp->name,name)==0){
            printf("Error : Type cannot have multiple fields with the same name (%s).\n",name);
            exit(1);
        }

        temp=temp->next;

    }

}


Fieldlist* createField(char *name, Typetable *type){

    checkDuplicateField(name);

    Fieldlist *temp=(Fieldlist*) malloc(sizeof(Fieldlist));
    temp->name=name;
    temp->fieldIndex=getfieldIndex();
    temp->type=type;
    temp->next=NULL;
    
    return temp;

}


void attachField(Fieldlist *field){
    
    Fcurr->next=field;
    Fcurr=Fcurr->next;
}


void checkType(Typetable *temp){

    if(temp->size==UNDEFINED){
        printf("Error : Type '%s' is not defined\n",temp->name);
        exit(1);

    }
}


void checkTypeAndCtype(Typetable *temp){
    
    if(temp->size==UNDEFINED){
        
        if(CLookup(temp->name)==NULL){
            printf("Error : Type '%s' is not defined\n",temp->name);
            exit(1);
        }
    }
}
