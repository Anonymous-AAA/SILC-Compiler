%{
 int yyerror(char const *s);
 int yylex(void);
 #include <stdlib.h>
 #include <stdio.h>
 #include "exprtree.h"
 #include "exprtree.c"
 #include "codegen.c"
 extern FILE *yyin;   //yyin is declared in the lex file
%}

%union{
 struct tnode *no;

}
%type <no> expr NUM  ID Slist Stmt InputStmt OutputStmt AsgStmt 
%token NUM PLUS MINUS MUL DIV END BEG READ WRITE ID EQUAL
%left PLUS MINUS
%left MUL DIV

%%



program : BEG Slist END {
            code($2);
            exit(0);
        }
        | BEG END
        ;
Slist : Slist Stmt {$$ = makeConnectorNode($1,$2);}
      | Stmt {$$ = $1;}
      ;
Stmt : InputStmt {$$ = $1;}
     | OutputStmt {$$ = $1;}
     | AsgStmt {$$ = $1;}
     ;
InputStmt : READ '(' ID ')' ';' {$$ = makeSingleNode('r',$3);} 
          ;
OutputStmt : WRITE '(' expr ')' ';' {$$ = makeSingleNode('w',$3);}
           ;
AsgStmt : ID EQUAL expr ';' {$$ = makeOperatorNode('=',$1,$3);}
        ;

expr : expr PLUS expr  {$$ = makeOperatorNode('+',$1,$3);}
  | expr MINUS expr   {$$ = makeOperatorNode('-',$1,$3);}
  | expr MUL expr {$$ = makeOperatorNode('*',$1,$3);}
  | expr DIV expr {$$ = makeOperatorNode('/',$1,$3);}
  | '(' expr ')'  {$$ = $2;}
  | NUM   {$$ = $1;}
  | ID {$$ = $1;}
  ;

%%

int yyerror(char const *s)
{
    printf("yyerror: %s",s);
}


int main(int argc, char* argv[]) {

  if(argc>1){
    
    FILE *fp = fopen(argv[1], "r");
    if(fp)
      yyin = fp;
    
  }   
  

  yyparse();

 return 0;
}

