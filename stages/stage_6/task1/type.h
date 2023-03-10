typedef struct Fieldlist{
  char *name;              //name of the field
  int fieldIndex;          //the position of the field in the field list
  struct Typetable *type;  //pointer to type table entry of the field's type
  struct Fieldlist *next;  //pointer to the next field
}Fieldlist;

typedef struct Typetable{
    char *name;                 //type name
    int size;                   //size of the type
    struct Fieldlist *fields;   //pointer to the head of fields list
    struct Typetable *next;     // pointer to the next type table entry
}Typetable;


//Typetable variables
Typetable *Tstart = NULL;
Typetable *Tcurr = NULL;


//fieldindex for each field of a type
int fieldIndex=-1;

//FieldList variables
Fieldlist *Fstart = NULL;
Fieldlist *Fcurr = NULL;
