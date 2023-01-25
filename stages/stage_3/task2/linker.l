%{
 #include "linker.h"
%}

%%

[A-Z]([A-Z]|[0-9])*:\n {   
                            //removing trailing :\n
                            int len=yyleng-2;
                            char* label= (char*) malloc(sizeof(char)*len);
                            strncpy(label,yytext,len);
                            
                            node *newNode=createNode(label,address());
                            if(prevNode)
                                prevNode->next=newNode;
                            else
                                start=newNode;

                            prevNode=newNode;

                            //printf("%s %d\n",label,address());
                        }   
[A-Z]([A-Z]|[0-9])* {
                        //label detected
                        node *temp= start;
                        while(temp){
                            if(strcmp(temp->label,yytext)==0){
                                    fprintf(lfp,"%d",temp->address);
                                    break;
                                }
                            temp=temp->next;
                        }

                        if(temp==NULL)
                            fprintf(lfp,"%s",yytext);

    }


\n  {   
        line++;
        fprintf(lfp,"%s",yytext);
    }
. { 
    fprintf(lfp,"%s",yytext);
    }

%%


node* createNode(char* label,int address){
    
    node *n=(node *) malloc(sizeof(node));
    n->label=label;
    n->address=address;
    n->next=NULL;
    return n;
}



int yywrap(void) {
    
    //close files after use
    fclose(lfp);
    if(strcmp(currfile,"target_label.xsm")==0){
            
            currfile="target_linked.xsm";
            FILE *fp= fopen(currfile,"r");
            if(fp){

                //set the file pointer afrer the header
                fseek(fp,19,SEEK_SET);
                yyin=fp;
                lfp= fopen("target.xsm","w");
                fprintf(lfp,"0\n2056\n0\n0\n0\n0\n0\n0\n");
                
                return 0;

            }else{
                    printf("target_linked.xsm not found\n");
            }


        }

    return 1;
}

int address(){
    return 2056+2*(line-1);
}


int main(){

    currfile="target_label.xsm";
    FILE *fp= fopen(currfile,"r");
    if(fp){

        //set the file pointer afrer the header
        fseek(fp,19,SEEK_SET);
        yyin=fp;
        lfp= fopen("target_linked.xsm","w");
        fprintf(lfp,"0\n2056\n0\n0\n0\n0\n0\n0\n");
        yylex();

    }else
    {
            printf("Target file not found\n");
    }
    
}
