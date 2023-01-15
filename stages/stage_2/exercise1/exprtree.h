typedef struct tnode{
 int val;   // value of a number for NUM nodes.
 int type;  // type of a variable
 char* varname; // name of a variable for ID nodes
 char* nodetype;  //indicates the opertor or info on non leaf nodes
 struct tnode *left,*right; //left and right branches
 }tnode;

/*Make a constant leaf tnode and set the value of val field*/
struct tnode* makeConstantLeafNode(int n);

// Make a variable leaf node
struct tnode* makeVariableLeafNode(char s);

// Make a connector node
struct tnode* makeConnectorNode(struct tnode *l,struct tnode *r);

// Make a single node
struct tnode* makeSingleNode(char c,struct tnode* node);

/*Make a tnode with opertor, left and right branches set*/
struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r);



//Allocating and releasing registers
int getReg();
void freeReg();
int codeGen(struct tnode *t);
void code(struct tnode* t);
