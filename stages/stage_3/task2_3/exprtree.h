#define MAX_REG 20
#define CONNECTOR 0 
#define inttype 1
#define booltype 2

//for evaluator
#define TRUE 3
#define FALSE 4

typedef struct tnode{
 int val;   // value of a number for NUM nodes.
 int type;  // type of a variable
 char* varname; // name of a variable for ID nodes
 int nodetype;  //indicates the opertor or info on non leaf nodes
 struct tnode *left,*right,*mid; //left and right branches
 }tnode;

/*Make a constant leaf tnode and set the value of val field*/
struct tnode* makeConstantLeafNode(int n);

// Make a variable leaf node
struct tnode* makeVariableLeafNode(char s);

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
