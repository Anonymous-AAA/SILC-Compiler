typedef struct Classtable {
 char *name;                           //name of the class
 struct ClassFieldlist *memberfield;        //pointer to Fieldlist
 struct Memberfunclist *vfuncptr;      //pointer to Memberfunclist
 struct Classtable *parentptr;         //pointer to the parent's class table
 int class_index;                      //position of the class in the virtual function table
 int fieldcount;                       //count of fields
 int methodcount;                      //count of methods
 struct Classtable *next;              //pointer to next class table entry
}Classtable;

typedef struct ClassFieldlist{
 char *name;   //name of the field
 int fieldindex;   //position of the field
 struct Typetable *type;  //pointer to typetable
 struct Classtable *ctype; //pointer to the class containing the field
 struct ClassFieldlist *next;  //pointer to next fieldlist entry
}ClassFieldlist;


typedef struct Memberfunclist {
 char *name;                      //name of the member function in the class
 struct Typetable *type;          //pointer to typetable
 struct Paramstruct *paramlist;   //pointer to the head of the formal parameter list
 int funcposition;                //position of the function in the class table
 int flabel;                      //A label for identifying the starting address of the function's code in the memory
 int defined;
 struct Memberfunclist *next;     //pointer to next Memberfunclist entry
}Memberfunclist;

//Classtable start and current
Classtable *Cstart=NULL;
Classtable *Ccurr=NULL;

//ClassFieldList start and current
//ClassFieldlist *Cfstart=NULL;
ClassFieldlist *Cfcurr=NULL;

//Memberfunclist start and current
//Memberfunclist *Cmstart=NULL;
Memberfunclist *Cmcurr=NULL;



int classIndex=-1;
