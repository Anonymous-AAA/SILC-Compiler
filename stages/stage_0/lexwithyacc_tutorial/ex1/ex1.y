%{
      #include <stdio.h>
      #include <stdlib.h>
%}


%union{
  
  char character;

}

%token CH NEWLINE

%left '+' '-'
%left '/' '*'

%type <character> CH


%%

start : expr NEWLINE  {
                        printf("\nComplete\n");
                        exit(1);
                      }
  ;

expr:  expr '+' expr        {printf("+ ");}
  | expr '-' expr     {printf("- ");}
  | expr '*' expr     {printf("* ");}
  | expr '/' expr     {printf("/ ");}
  | '(' expr ')'
  | CH             {printf("%c ",$<character>1);}
  ;

%%

int yyerror(char const *s)
{
    printf("yyerror  %s\n",s);
}
int main()
{
  yyparse();
  return 1;
}
