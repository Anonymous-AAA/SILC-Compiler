%{

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int yyerror(char const*);
int yylex();


%}

%token DIGIT
%token LETTER



%%

start : name '\n' {printf("Accepted\n");exit(1);}
      ;

name  : LETTER | name LETTER | name DIGIT
      ;

%%


int yyerror(char const *s){
    
    printf("Not Accepted, because of %s\n",s);
}

int yylex(){

    char c;
    c=getchar();
    if(isdigit(c)){
        
        return DIGIT;
    }else if(isalpha(c)){

        
        return LETTER;


    }else{
        
        return c;

    }
    

}

int main(){
    
    yyparse();
    return 1;


}
