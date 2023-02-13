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
 struct Paramstruct *param;
}

%type <sym> GidList Gid
%type <integer> Type
%type <no> expr NUM STRCON ID Body Stmt InputStmt OutputStmt AsgStmt IfStmt WhileStmt BreakStmt ContinueStmt
%type <param> ParamList Param
%token NUM PLUS MINUS MUL DIV MOD END BEG READ WRITE ID EQUAL IF THEN ELSE ENDIF WHILE DO ENDWHILE LT GT LE GE NE EQ BREAK CONTINUE DECL ENDDECL INT STR STRCON MAIN
%nonassoc LT GT LE GE NE EQ
%left PLUS MINUS
%left MUL DIV MOD

%%



//program : GDeclBlock FdefBlock BEG Body END {
//           //evaluate($3);
//           code($3);
////         test($3);
//           exit(0);
//        }
//        | BEG END
//        ;

//new beginnings


//Global

//use evaluate() test() for testing
Program : GDeclBlock FDefBlock MainBlock {
          //code($3);
          //evaluate($3)
          //test($3)
          printSymbolTable();
          exit(0);
          }
        | GDeclBlock MainBlock {
          //code($2);
          printSymbolTable();
          //evaluate($2)
          //test($2)
          exit(0);
          }
        | MainBlock {
          //code($1); 
          printSymbolTable();
          //evaluate($1)
          //test($1)
          exit(0);
          }
        ;



GDeclBlock  : DECL GDeclList ENDDECL // {printSymbolTable();}
            | DECL ENDDECL
            ;

GDeclList : GDeclList GDecl 
          | GDecl 
          ;

GDecl : Type GidList ';' { setType($2,$1);}
      ;



GidList : GidList ',' Gid {$$=$1;}
        | Gid {$$=$1;}
        ;


Gid : ID {$$=GInstallVar($1->varname,voidtype,1);}
    | ID '[' NUM ']' {$$=GInstallVar($1->varname,voidtype,$3->val);}
    | ID '(' ParamList ')' {$$=GInstallFn($1->varname,voidtype,$3);}
    ;


//GidList : GidList ',' ID {Install($3->varname,voidtype,1);}
//        | ID {$$=Install($1->varname,voidtype,1);}
//        | GidList ',' ID '[' NUM ']' {Install($3->varname,voidtype,$5->val);}
//        | ID '[' NUM ']'{$$=Install($1->varname,voidtype,$3->val);}
//        ;


//Main Block
MainBlock : INT MAIN '(' ')' '{' LDeclBlock Body '}'
          | INT MAIN '(' ')' '{' Body '}' 
          ;


//Function

FDefBlock : FDefBlock Fdef
          | Fdef
          ;

Fdef : Type ID '(' ParamList ')' '{' LDeclBlock Body '}'
     ;

ParamList : ParamList ',' Param {$$=$1; createParamList($3);} 
          | Param {$$=$1;PCurr=$1;}
          | {}
          ;

Param : Type ID {$$=createParams($1,$2->varname);}
      ;


Type : INT {$$ = inttype;} 
     | STR {$$ = strtype;}
     ;


LDeclBlock  : DECL LDecList ENDDECL
            | DECL ENDDECL
            ;

LDecList  : LDecList LDecl
          | LDecl
          ;

LDecl : Type IdList ';'
      ;

IdList  : IdList ',' ID
        | ID


Body : Body Stmt {$$ = makeConnectorNode($1,$2);}
      | Stmt {$$ = $1;}
      ;

Stmt : InputStmt {$$ = $1;}
     | OutputStmt {$$ = $1;}
     | AsgStmt {$$ = $1;}
     | IfStmt {$$ = $1;}
     | WhileStmt {$$ = $1;}
     | BreakStmt {$$ = $1;}
     | ContinueStmt {$$ = $1;}
     ;
InputStmt : READ '(' ID ')' ';' {setGentry($3);
                                $$ = makeSingleNode(READ,$3);
                                } 
          | READ '(' ID '[' expr ']' ')' ';' { setArrayNode($3,$5);
                                            $$ = makeSingleNode(READ,$3);
                                            }
          ;
OutputStmt : WRITE '(' expr ')' ';' {$$ = makeSingleNode(WRITE,$3);}
           ;
AsgStmt : ID EQUAL expr ';' {setGentry($1); 
                              $$ = makeOperatorNode(EQUAL,$1,$3);
                              }
        | ID '[' expr ']' EQUAL expr ';' { setArrayNode($1,$3);
                                          $$ = makeOperatorNode(EQUAL,$1,$6);
                                        }
        ;

IfStmt : IF '(' expr ')' THEN Body ELSE Body ENDIF ';' {$$ = makeTriplets(IF,$3,$6,$8);}
       | IF '(' expr ')' THEN Body ENDIF ';'{$$ = makeTriplets(IF,$3,$6,NULL);}
       ;

WhileStmt : WHILE '(' expr ')' DO Body ENDWHILE ';' {$$ = makeTriplets(WHILE,$3,$6,NULL);}
          ;

BreakStmt : BREAK ';' {$$ = makeNoChildNode(BREAK);}
          ;

ContinueStmt : CONTINUE ';' {$$ = makeNoChildNode(CONTINUE);}
             ;

expr : expr PLUS expr  {$$ = makeOperatorNode(PLUS,$1,$3);}
  | expr MINUS expr   {$$ = makeOperatorNode(MINUS,$1,$3);}
  | expr MUL expr {$$ = makeOperatorNode(MUL,$1,$3);}
  | expr DIV expr {$$ = makeOperatorNode(DIV,$1,$3);}
  | expr MOD expr {$$ = makeOperatorNode(MOD,$1,$3);}
  | expr LT expr  {$$ = makeOperatorNode(LT,$1,$3);}
  | expr GT expr  {$$ = makeOperatorNode(GT,$1,$3);}
  | expr LE expr  {$$ = makeOperatorNode(LE,$1,$3);}
  | expr GE expr  {$$ = makeOperatorNode(GE,$1,$3);}
  | expr NE expr  {$$ = makeOperatorNode(NE,$1,$3);}
  | expr EQ expr  {$$ = makeOperatorNode(EQ,$1,$3);}
  | '(' expr ')'  {$$ = $2;}
  | NUM   {$$ = $1;}
  | STRCON {$$ = $1;}
  | ID {setGentry($1);$$ = $1;}
  | ID '[' expr ']'{setArrayNode($1,$3);$$=$1;}
  | ID '('')' 
  | ID '(' ArgList ')'
  ;

ArgList : ArgList ',' expr
        | expr


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

