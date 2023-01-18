%{
 int yyerror(char const *s);
 int yylex(void);
 #include <stdlib.h>
 #include <stdio.h>
 #include "astree.h"
 #include "astree.c"
 #include "codegen.c"
 extern FILE *yyin;   //yyin is declared in the lex file
%}

%union{
 struct tnode *no;

}
%type <no> expr NUM  ID Slist Stmt InputStmt OutputStmt AsgStmt IfStmt WhileStmt
%token NUM PLUS MINUS MUL DIV END BEG READ WRITE ID EQUAL IF THEN ELSE ENDIF WHILE DO ENDWHILE LT GT LE GE EE NE
%left PLUS MINUS
%left MUL DIV
%nonassoc LT GT LE GE EE NE

%%



program : BEG Slist END {
           // code($2);
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
     | IfStmt {$$ = $1;}
     | WhileStmt {$$ = $1;}
     ;
InputStmt : READ '(' ID ')' ';' {$$ = makeSingleNode(READ,$3);} 
          ;
OutputStmt : WRITE '(' expr ')' ';' {$$ = makeSingleNode(WRITE,$3);}
           ;
AsgStmt : ID EQUAL expr ';' {$$ = makeOperatorNode(EQUAL,$1,$3);}
        ;

IfStmt : IF '(' expr ')' THEN Slist ELSE Slist ENDIF {$$ = makeCondLoopNode(IF,$3,$6,$8);}
       | IF '(' expr ')' THEN Slist ENDIF {$$ = makeCondLoopNode(IF,$3,$6,NULL);}
       ;

WhileStmt : WHILE '(' expr ')' DO Slist ENDWHILE {$$ = makeCondLoopNode(WHILE,$3,$6,NULL);}
          ;






expr : expr PLUS expr  {$$ = makeOperatorNode(PLUS,$1,$3);}
  | expr MINUS expr   {$$ = makeOperatorNode(MINUS,$1,$3);}
  | expr MUL expr {$$ = makeOperatorNode(MUL,$1,$3);}
  | expr DIV expr {$$ = makeOperatorNode(DIV,$1,$3);}
  | '(' expr ')'  {$$ = $2;}
  | NUM   {$$ = $1;}
  | ID {$$ = $1;}
  | expr LT expr {$$ = makeOperatorNode(LT,$1,$3);}
  | expr GT expr {$$ = makeOperatorNode(GT,$1,$3);}
  | expr LE expr {$$ = makeOperatorNode(LE,$1,$3);}
  | expr GE expr {$$ = makeOperatorNode(GE,$1,$3);}
  | expr NE expr {$$ = makeOperatorNode(NE,$1,$3);}
  | expr EE expr {$$ = makeOperatorNode(EE,$1,$3);}
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

