%{
 #include "linker.h"
%}

%%

[A-Z]([A-Z]|[0-9])*:\n {    
                            printf("%s %d\n",yytext,address());
                        }   
\n  {   
        line++;
        fprintf(lfp,"%s",yytext);
    }
. { 
    fprintf(lfp,"%s",yytext);
    }

%%

int yywrap(void) {
 return 1;
}

int address(){
    return 2056+2*(line-1);
}


int main(){


    FILE *fp= fopen("target.xsm","r");
    if(fp){

        //set the file pointer afrer the header
        fseek(fp,19,SEEK_SET);
        yyin=fp;
        lfp= fopen("target_linked.xsm","w");
        fprintf(lfp,"0\n2056\n0\n0\n0\n0\n0\n0\n");
        yylex();

        //close files after use
        fclose(fp);
        fclose(lfp);
    }else
    {
            printf("Target file not found\n");
    }
    
}
