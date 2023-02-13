typedef struct Gsymbol {
  char *name;       // name of the variable
  int type;         // type of the variable
  int size;         // size of the type of the variable
  int binding;      // stores the static memory address allocated to the variable
  struct Paramstruct *paramlist; //pointer to the head of formal parameter list
  int flabel; //a label for identifying the starting address of a function's code
  struct Gsymbol *next; //pointer to next Global symbol table entry
} Gsymbol;


typedef struct Lsymbol{
char *name; //name of the variable
int type;  //type of the variable:(Integer / String)
int binding; //local binding of the variable
struct Lsymbol *next; //points to the next Local Symbol Table entry
} Lsymbol;


typedef struct Paramstruct{
  char *name;
  int type;
  struct Paramstruct *next;
} Paramstruct;


Gsymbol *Gstart= NULL;
Gsymbol *Gcurr = NULL;
int nextBinding=4096;
int Flabel=0;   //For funtion label purpose


Paramstruct *PCurr = NULL; //For storing current pointer to the parameter list



//Datatypes
#define inttype 1
#define booltype 2
#define voidtype 3
#define strtype 4

