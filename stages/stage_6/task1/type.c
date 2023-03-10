
//Function to initialise the type table entries with primitive types (int,str) and special entries_(boolean,null,void).
void TypeTableCreate(){

    Typetable *entry=(Typetable*) malloc(sizeof(Typetable));
    Tstart=entry;   //setting the start of TypeTable

    //int
    entry->name=(char *) malloc(sizeof(char)*4);
    strcpy(entry->name,"int");
    entry->size=1;
    entry->fields=NULL;

    entry->next=(Typetable*) malloc(sizeof(Typetable));
    entry=entry->next;

    //str
    entry->name=(char *) malloc(sizeof(char)*4);
    strcpy(entry->name,"str");
    entry->size=1;
    entry->fields=NULL;


    entry->next=(Typetable*) malloc(sizeof(Typetable));
    entry=entry->next;

    //boolean
    entry->name=(char *) malloc(sizeof(char)*5);
    strcpy(entry->name,"bool");
    entry->size=1;
    entry->fields=NULL;


    entry->next=(Typetable*) malloc(sizeof(Typetable));
    entry=entry->next;

    //null
    entry->name=(char *) malloc(sizeof(char)*5);
    strcpy(entry->name,"null");
    entry->size=1;
    entry->fields=NULL;


    entry->next=(Typetable*) malloc(sizeof(Typetable));
    entry=entry->next;

    //void
    entry->name=(char *) malloc(sizeof(char)*5);
    strcpy(entry->name,"void");
    entry->size=1;
    entry->fields=NULL;

    Tcurr=entry;    //setting the current entry
}


//Search through the type table and return pointer to type table entry of type 'name'. Returns NULL if entry is not found.
Typetable* TLookup(char* name){

    Typetable* temp=Tstart;

    while(temp){
        
        if(strcmp(temp->name,name)==0)
            return temp;

        temp=temp->next;

    }
     
    printf("Error : Type '%s is not declared\n",name);
    exit(1);

    //return null if entry not found
    //return NULL;

}


Typetable* TInstall(char *name,int size, Fieldlist *fields){

    Typetable* temp= (Typetable*) malloc(sizeof(Typetable));
    temp->name=name;
    temp->size=size;
    temp->fields=fields;
    temp->next=NULL;

    Tcurr->next=temp;
    Tcurr=temp;

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
    return fieldIndex;
    
}


Fieldlist* createField(char *name, Typetable *type){

    Fieldlist *temp=(Fieldlist*) malloc(sizeof(Fieldlist));
    temp->name=name;
    temp->fieldIndex=getfieldIndex();
    temp->type=type;
    temp->next=NULL;
    
    return temp;

}


void attachField(Fieldlist *field){
    





}

