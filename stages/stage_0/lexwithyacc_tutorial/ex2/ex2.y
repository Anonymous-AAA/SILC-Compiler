%{
      #include <stdio.h>
      #include <stdlib.h>
%}


%union{
  
  char *name;

}

%token VAR NEWLINE

%left '+' '-'
%left '/' '*'

%type <name> VAR


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
  | VAR             {printf("%s ",$<name>1);}
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
