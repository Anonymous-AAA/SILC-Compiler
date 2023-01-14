%{
 #include <stdlib.h>
 #include <stdio.h>
 #include "exprtree.h"
 #include "exprtree.c"
 #include "codegen.c"
 int yylex(void);
%}

%union{
 struct tnode *no;

}
%type <no> expr NUM program END
%token NUM PLUS MINUS MUL DIV END
%left PLUS MINUS
%left MUL DIV

%%

program : expr END {
    $$ = $2;
    code($1);    
    exit(1);

   }
  ;

expr : PLUS expr expr  {$$ = makeOperatorNode('+',$2,$3);}
  | MINUS expr expr   {$$ = makeOperatorNode('-',$2,$3);}
  | MUL expr expr {$$ = makeOperatorNode('*',$2,$3);}
  | DIV expr expr {$$ = makeOperatorNode('/',$2,$3);}
  | '(' expr ')'  {$$ = $2;}
  | NUM   {$$ = $1;}
  ;

%%

yyerror(char const *s)
{
    printf("yyerror: %s",s);
}


int main(void) {
 yyparse();

 return 0;
}
