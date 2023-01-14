%{
 int yyerror(char const *s);
 int yylex(void);
 #include <stdlib.h>
 #include <stdio.h>
 #include "exprtree.h"
 #include "exprtree.c"
 #include "codegen.c"
%}

%union{
 struct tnode *no;

}
%type <no> expr NUM  
%token NUM PLUS MINUS MUL DIV END BEGIN READ WRITE ID
%left PLUS MINUS
%left MUL DIV

%%

program : expr END {
    code($1);    
    exit(0);

   }
  ;


program : BEGIN Slist END | BEGIN END
Slist : Slist Stmt | Stmt
Stmt : InputStmt | OutputStmt | AsgStmt
InputStmt : READ '(' ID ')' ';'  
OutputStmt : WRITE '(' expr ')' ';'
AsgStmt : ID EQUAL expr ';'

expr : expr PLUS expr  {$$ = makeOperatorNode('+',$1,$3);}
  | expr MINUS expr   {$$ = makeOperatorNode('-',$1,$3);}
  | expr MUL expr {$$ = makeOperatorNode('*',$1,$3);}
  | expr DIV expr {$$ = makeOperatorNode('/',$1,$3);}
  | '(' expr ')'  {$$ = $2;}
  | NUM   {$$ = $1;}
  | ID
  ;

%%

int yyerror(char const *s)
{
    printf("yyerror: %s",s);
}


int main(void) {
 yyparse();

 return 0;
}
