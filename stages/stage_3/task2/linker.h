typedef struct node{
  char* label;
  int address;
  struct node *next;
} node;

int address();
node* createNode(char* label, int address);


FILE *lfp;
int line=1;
node *prevNode=NULL;
node *start=NULL;
char* currfile;
