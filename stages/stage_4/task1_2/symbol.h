typedef struct Gsymbol {
  char* name;       // name of the variable
  int type;         // type of the variable
  int size;         // size of the type of the variable
  int binding;      // stores the static memory address allocated to the variable
  struct Gsymbol *next;
} Gsymbol;

Gsymbol *start= NULL;
Gsymbol *curr = NULL;
int nextBinding=4095;


#define inttype 1
#define booltype 2
#define voidtype 3
#define strtype 4
