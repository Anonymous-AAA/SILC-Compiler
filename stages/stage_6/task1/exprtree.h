
#define MAX_REG 19
#define GARBAGE_REG 19 //R19 will be the garbage register to pop out from stack and all
//#define inttype 1
//#define booltype 2
//#define voidtype 3

//for evaluator
#define TRUE -9999
#define FALSE -9998

//for nil
#define NIL -9997

//When a function is defined the size field in global symbol table is set to DEFINED
#define DEFINED -9996


#define CONNECTOR -1 
#define CONSTNUM -2
#define CONSTSTR -3
#define VAR -4
#define FUNCTION -5


typedef struct tnode{
 int val;   // value of a number for NUM nodes.
struct Typetable *type;  // type of a variable
 char* varname; // name of a variable for ID nodes
 char* strval; //to store string constants
 int nodetype;  //indicates the opertor or info on  nodes
 struct tnode *left,*right,*mid; //left and right branches
 struct tnode *arglist;  //pointer to the expression list given as arguments to a function call
 struct Lsymbol *Lentry; //pointer to the function's LST for local variables and arguements
 struct Gsymbol *Gentry; // pointer to GST entry for global variables and functions
 }tnode;

/*Make a constant leaf tnode and set the value of val field*/
struct tnode* makeConstantLeafNode(int n);

// Make a variable leaf node
struct tnode* makeVariableLeafNode(char *s, int len);

//Make constant string leaf node
struct tnode* makeConstantStringNode(char *s, int len);


// Make a connector node
//struct tnode* makeConnectorNode(struct tnode *l,struct tnode *r);

// Make a single node
//struct tnode* makeSingleNode(int c,struct tnode* node);

/*Make a tnode with opertor, left and right branches set*/
//struct tnode* makeOperatorNode(int c,struct tnode *l,struct tnode *r);


//struct tnode* makeTriplets(int c,struct tnode *l,struct tnode *r,struct tnode *m);

//Allocating and releasing registers
//int getReg();
//void freeReg();
//int codeGen(struct tnode *t);
//void code(struct tnode* t);

//for testing
//void prefix(struct tnode *t);
//void postfix(struct tnode* t);
