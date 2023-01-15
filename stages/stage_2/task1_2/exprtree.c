

struct tnode* makeConstantLeafNode(int n)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->nodetype = NULL;
    temp->val = n;
    temp->left = NULL;
    temp->right = NULL;
    temp->varname=NULL;
    return temp;
}
struct tnode* makeVariableLeafNode(char s)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->nodetype = NULL;
    temp->varname= (char *) malloc(sizeof(char));
    *(temp->varname) = s;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->nodetype = (char *) malloc(sizeof(char));
    *(temp->nodetype) = c;
    temp->left = l;
    temp->right = r;
    temp->varname=NULL;
    return temp;
}

struct tnode* makeConnectorNode(struct tnode *l,struct tnode *r){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->nodetype = (char *) malloc(sizeof(char));
    *(temp->nodetype) = 'c';
    temp->left = l;
    temp->right = r;
    temp->varname=NULL;
    return temp;
}


struct tnode* makeSingleNode(char c,struct tnode* node){
    struct tnode *temp;
    temp=(struct tnode *) malloc(sizeof(struct tnode));
    temp->nodetype =(char *) malloc(sizeof(char));
    *(temp->nodetype) = c;
    temp->left = node;
    temp->right = NULL;
    temp->varname = NULL;
    return temp;
}

