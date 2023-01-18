#define inttype 1
#define booltype 0
#define notype -1
#define CONNECTOR 'C'
// nodevalue 'r' for read and 'w' for write

typedef struct tnode{
 int val;   // value of a number for NUM nodes.
 int type;  // type of a variable
 char* varname; // name of a variable for ID nodes
 int nodetype;  //indicates the opertor or info on non leaf nodes
 struct tnode *left,*right,*mid; //left,right and mid branches
 }tnode;

/*Make a constant leaf tnode and set the value of val field*/
struct tnode* makeConstantLeafNode(int n);

// Make a variable leaf node
struct tnode* makeVariableLeafNode(char s);

// Make a connector node
struct tnode* makeConnectorNode(struct tnode *l,struct tnode *r);

// Make a single node
struct tnode* makeSingleNode(int c,struct tnode* node);

/*Make a tnode with opertor, left and right branches set*/
struct tnode* makeOperatorNode(int c,struct tnode *l,struct tnode *r);

struct tnode* makeCondLoopNode(int c,struct tnode *cond, struct tnode *st1, struct tnode *st2);


//Allocating and releasing registers
int getReg();
void freeReg();
int codeGen(struct tnode *t);
void code(struct tnode* t);
