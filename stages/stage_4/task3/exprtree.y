%{
 int yyerror(char const *s);
 int yylex(void);
 #include <stdlib.h>
 #include <stdio.h>
 #include "exprtree.c"
 #include "codegen.c"
// #include "symbol.c"
// #include "test.c"
// #include "evaluate.c"
 extern FILE *yyin;   //yyin is declared in the lex file
%}

%union{
 struct tnode *no;
 int integer;
 struct  Gsymbol *sym;
}

%type <sym> VarList DeclList Decl
%type <integer> Type
%type <no> expr NUM STRCON ID Slist Stmt InputStmt OutputStmt AsgStmt IfStmt WhileStmt BreakStmt ContinueStmt
%token NUM PLUS MINUS MUL DIV MOD END BEG READ WRITE ID EQUAL IF THEN ELSE ENDIF WHILE DO ENDWHILE LT GT LE GE NE EQ BREAK CONTINUE DECL ENDDECL INT STR STRCON
%nonassoc LT GT LE GE NE EQ
%left PLUS MINUS
%left MUL DIV MOD

%%



program : Declarations BEG Slist END {
           //evaluate($3);
           code($<no>3);
//         test($3);
           exit(0);
        }
        | BEG END
        ;

Declarations : DECL DeclList ENDDECL // {printSymbolTable();}
             | DECL ENDDECL
             ;

DeclList : DeclList Decl 
         | Decl 
         ;

Decl : Type VarList ';' {
          
          setType($<sym>2,$<integer>1);

     }
     ;

Type : INT {$<integer>$ = inttype;} 
     | STR {$<integer>$ = strtype;}
     ;

VarList : VarList ',' ID {Install($<no>3->varname,voidtype,1);}
        | ID {$<sym>$=Install($<no>1->varname,voidtype,1);}
        | VarList ',' ID '[' NUM ']' {Install($<no>3->varname,voidtype,$5->val);}
        | ID '[' NUM ']'{$<sym>$=Install($<no>1->varname,voidtype,$3->val);}
        ;


Slist : Slist Stmt {$<no>$ = makeConnectorNode($<no>1,$<no>2);}
      | Stmt {$<no>$ = $<no>1;}
      ;
Stmt : InputStmt {$<no>$ = $<no>1;}
     | OutputStmt {$<no>$ = $<no>1;}
     | AsgStmt {$<no>$ = $<no>1;}
     | IfStmt {$<no>$ = $<no>1;}
     | WhileStmt {$<no>$ = $<no>1;}
     | BreakStmt {$<no>$ = $<no>1;}
     | ContinueStmt {$<no>$ = $<no>1;}
     ;
InputStmt : READ '(' ID ')' ';' {setGentry($<no>3);
                                $<no>$ = makeSingleNode(READ,$<no>3);
                                } 
          | READ '(' ID '[' expr ']' ')' ';' { setArrayNode($<no>3,$<no>5);
                                            $<no>$ = makeSingleNode(READ,$<no>3);
                                            }
          ;
OutputStmt : WRITE '(' expr ')' ';' {$<no>$ = makeSingleNode(WRITE,$<no>3);}
           ;
AsgStmt : ID EQUAL expr ';' {setGentry($<no>1); 
                              $<no>$ = makeOperatorNode(EQUAL,$<no>1,$<no>3);
                              }
        | ID '[' expr ']' EQUAL expr ';' { setArrayNode($<no>1,$<no>3);
                                          $<no>$ = makeOperatorNode(EQUAL,$<no>1,$<no>6);
                                        }
        ;

IfStmt : IF '(' expr ')' THEN Slist ELSE Slist ENDIF ';' {$<no>$ = makeTriplets(IF,$<no>3,$<no>6,$<no>8);}
       | IF '(' expr ')' THEN Slist ENDIF ';'{$<no>$ = makeTriplets(IF,$<no>3,$<no>6,NULL);}
       ;

WhileStmt : WHILE '(' expr ')' DO Slist ENDWHILE ';' {$<no>$ = makeTriplets(WHILE,$<no>3,$<no>6,NULL);}
          ;

BreakStmt : BREAK ';' {$<no>$ = makeNoChildNode(BREAK);}
          ;

ContinueStmt : CONTINUE ';' {$<no>$ = makeNoChildNode(CONTINUE);}
             ;

expr : expr PLUS expr  {$<no>$ = makeOperatorNode(PLUS,$<no>1,$<no>3);}
  | expr MINUS expr   {$<no>$ = makeOperatorNode(MINUS,$<no>1,$<no>3);}
  | expr MUL expr {$<no>$ = makeOperatorNode(MUL,$<no>1,$<no>3);}
  | expr DIV expr {$<no>$ = makeOperatorNode(DIV,$<no>1,$<no>3);}
  | expr MOD expr {$<no>$ = makeOperatorNode(MOD,$<no>1,$<no>3);}
  | expr LT expr  {$<no>$ = makeOperatorNode(LT,$<no>1,$<no>3);}
  | expr GT expr  {$<no>$ = makeOperatorNode(GT,$<no>1,$<no>3);}
  | expr LE expr  {$<no>$ = makeOperatorNode(LE,$<no>1,$<no>3);}
  | expr GE expr  {$<no>$ = makeOperatorNode(GE,$<no>1,$<no>3);}
  | expr NE expr  {$<no>$ = makeOperatorNode(NE,$<no>1,$<no>3);}
  | expr EQ expr  {$<no>$ = makeOperatorNode(EQ,$<no>1,$<no>3);}
  | '(' expr ')'  {$<no>$ = $<no>2;}
  | NUM   {$<no>$ = $<no>1;}
  | STRCON {$<no>$ = $<no>1;}
  | ID {setGentry($<no>1);$<no>$ = $<no>1;}
  | ID '[' expr ']'{setArrayNode($<no>1,$<no>3);$<no>$=$<no>1;}
  ;

%%

int yyerror(char const *s)
{
    printf("yyerror: %s\n",s);
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

