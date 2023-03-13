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
 struct Typetable *type;
 struct Fieldlist *flist;
 struct Gsymbol *gsym;
 struct Lsymbol *lsym;  
 struct Paramstruct *param;
}

%type <gsym> GidList Gid
%type <lsym> IdList
%type <type> Type
%type <flist> FieldDeclList FieldDecl
%type <no> expr NUM STRCON ID Stmt InputStmt OutputStmt AsgStmt IfStmt WhileStmt BreakStmt ContinueStmt Body ArgList ReturnStmt FreeStmt Field 
%type <param> ParamList Param
%token NUM PLUS MINUS MUL DIV MOD END BEG READ WRITE ID EQUAL IF THEN ELSE ENDIF WHILE DO ENDWHILE LT GT LE GE NE EQ BREAK CONTINUE DECL ENDDECL INT STR STRCON MAIN RET AND OR FREE ALLOC TYPE ENDTYPE INIT NUL

%left OR
%left AND
%nonassoc LT GT LE GE NE EQ
%left PLUS MINUS
%left MUL DIV MOD

%%




//use evaluate() test() for testing
Program : TypeDefBlock GDeclBlock FDefBlock MainBlock {
          //code($3);
          //evaluate($3)
          //test($3)
          printTypeTable();
          printGSymbolTable();
          exit(0);
          }
        ;



//Typedef block

TypeDefBlock : TYPE TypeDefList ENDTYPE
             |      //can be empty
             ;

TypeDefList : TypeDefList TypeDef 
            | TypeDef 
            ;

TypeDef : ID '{' FieldDeclList '}' {TInstall($1->varname,$3);}  
        ;

FieldDeclList : FieldDeclList FieldDecl {$$ = $1; attachField($2);}
              | FieldDecl {$$ = $1; Fcurr=$1;}
              ;

FieldDecl : Type ID ';' {$$ = createField($2->varname,$1);}





//Global declaration block

GDeclBlock  : DECL GDeclList ENDDECL // {printSymbolTable();}
//            | DECL ENDDECL
            |                     //can be empty
            ;

GDeclList : GDeclList GDecl 
          | GDecl 
          ;

GDecl : Type GidList ';' {checkType($1);setGType($2,$1);}
      ;



GidList : GidList ',' Gid {$$=$1;}
        | Gid {$$=$1;}
        ;


Gid : ID {$$=GInstallVar($1->varname,voidtype,1);}
    | ID '[' NUM ']' {$$=GInstallVar($1->varname,voidtype,$3->val);}
    | ID '(' ParamList ')' {$$=GInstallFn($1->varname,voidtype,$3);}
    ;




//Main Block
MainBlock : INT MAIN '(' ')' '{' LDeclBlock BEG Body ReturnStmt END '}' {
            $8 = makeConnectorNode($8,$9);  //Attaching the return statement
            checkMain($9->left->type);
            codeFunction($8,NULL);       //Generating code
            printLSymbolTable("main"); //Printing the local symbol table
            deallocateLST();     //deallocating the Local Symbol Table
            deallocateAST($8);  //deallocating the AST
          }
//          | INT MAIN '(' ')' '{' BEG Body ReturnStmt END '}' {
//            $7 = makeConnectorNode($7,$8);  //Attaching the return statement
//            checkMain();
//            codeFunction($7,NULL);       //Generating code
//            //printLSymbolTable("main"); //Printing the local symbol table
//            deallocateLST();     //deallocating the Local Symbol Table
//            deallocateAST($7);  //deallocating the AST
//  
//          }
          ;


//Function

FDefBlock : FDefBlock Fdef
          //| Fdef
          |               //can be empty
          ;

Fdef  : Type ID '(' ParamList ')' '{' LDeclBlock BEG Body ReturnStmt END '}' {

        checkType($1);

        $9 = makeConnectorNode($9,$10);  //Attaching the return statement
        checkFn($1,$10->left->type,$2->varname,$4);  //to check definition with declaration
        //addParamstoLST($4);   //Adding the parameters to LST
        codeFunction($9,$2->varname);       //Generating code
        printLSymbolTable($2->varname); //Printing the local symbol table
        deallocateLST();     //deallocating the Local Symbol Table
        deallocateAST($9);  //deallocating the AST
      }
//      | Type ID '(' ParamList ')' '{' BEG Body ReturnStmt END '}'{
//      
//        $8 = makeConnectorNode($8,$9);  //Attaching the return statement
//        checkFn($1,$2->varname,$4);  //to check definition with declaration
//        //addParamstoLST($4);   //Adding the parameters to LST
//        codeFunction($8,$2->varname);       //Generating code
//        //printLSymbolTable($2->varname); //printing the local symbol table
//        deallocateLST();     //deallocating the Local Symbol Table
//        deallocateAST($8);  //deallocating the AST
//      } 
      ;

ParamList : ParamList ',' Param {$$=$1; createParamList($3);} 
          | Param {$$=$1;PCurr=$1;} //Pcurr is maintained as end of the param list
          | {$$=NULL;}
          ;

Param : Type ID {checkType($1);$$=createParams($1,$2->varname);}
      ;


Type : INT {$$ = inttype;} 
     | STR {$$ = strtype;}
     | ID  {$$ = TLookup($1->varname);}
     ;


LDeclBlock  : DECL LDecList ENDDECL
            //| DECL ENDDECL
            | //can be empty
            ;

LDecList  : LDecList LDecl
          | LDecl
          ;

LDecl : Type IdList ';'{checkType($1);setLType($2,$1);}
      ;

IdList  : IdList ',' ID {$$=$1; LInstallVar($3->varname,voidtype,FALSE);}  //False becuse they are local variables
        | ID {$$=LInstallVar($1->varname,voidtype,FALSE);}


Body    : Body Stmt {$$ = makeConnectorNode($1,$2);}
//        | Stmt {$$ = $1;}
        |  {$$ = NULL;}   //can be empty
        ;

Stmt : InputStmt {$$ = $1;}
     | OutputStmt {$$ = $1;}
     | AsgStmt {$$ = $1;}
     | IfStmt {$$ = $1;}
     | WhileStmt {$$ = $1;}
     | BreakStmt {$$ = $1;}
     | ContinueStmt {$$ = $1;}
//     | AllocStmt {$$ = $1;} 
     | FreeStmt {$$ = $1;}
//     | InitStmt {$$ = $1;}
//     | ReturnStmt {$$ = $1;}
     ;

FreeStmt : FREE '(' ID ')' ';' { setEntry($3); 
                                 $$=makeSingleNode(FREE,$3);
                                 }
         | FREE '(' Field ')' ';' { $$=makeSingleNode(FREE,$3);}
         ;

//AllocStmt : ID EQUAL ALLOC '(' ')' ';'
//          | Field EQUAL ALLOC '(' ')' ';'
//          ;

//InitStmt : ID EQUAL INIT '(' ')' ';'
//         ;

InputStmt : READ '(' ID ')' ';' {setEntry($3);
                                $$ = makeSingleNode(READ,$3);
                                } 
          | READ '(' ID '[' expr ']' ')' ';' { setArrayNode($3,$5);
                                            $$ = makeSingleNode(READ,$3);
                                            }
          | READ '(' Field ')'  ';' { $$=makeSingleNode(READ,$3);}
          ;

OutputStmt : WRITE '(' expr ')' ';' {$$ = makeSingleNode(WRITE,$3);}
           ;

AsgStmt : ID EQUAL expr ';' {setEntry($1); 
                              $$ = makeOperatorNode(EQUAL,$1,$3);
                              }
        | ID '[' expr ']' EQUAL expr ';' { setArrayNode($1,$3);
                                          $$ = makeOperatorNode(EQUAL,$1,$6);
                                        }
        | ID EQUAL ALLOC '(' ')' ';'{setEntry($1);
                                        $$ = makeOperatorNode(EQUAL,$1,makeNoChildNode(ALLOC));
                                        }
        | Field EQUAL ALLOC '(' ')' ';'  {
                                                $$ = makeOperatorNode(EQUAL,$1,makeNoChildNode(ALLOC));
                                        }
        | ID EQUAL INIT '(' ')' ';' {setEntry($1);
                                        $$ = makeOperatorNode(EQUAL,$1,makeNoChildNode(INIT));
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


ReturnStmt : RET expr ';' {
//                            checkReturnType($2->type);
                            $$ = makeSingleNode(RET,$2);
                        } 
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
  | expr OR expr  {$$ = makeOperatorNode(OR,$1,$3);}
  | expr AND expr {$$ = makeOperatorNode(AND,$1,$3);}
  | MINUS expr {$$ = makeSingleNode(MINUS,$2);}
  | '(' expr ')'  {$$ = $2;}
  | NUM   {$$ = $1;}
  | STRCON {$$ = $1;}
  | ID {setEntry($1);$$ = $1;}
  | ID '[' expr ']'{setArrayNode($1,$3);$$=$1;}
  | ID '('')' {$$=makeFnNode($1->varname,NULL);}
  | ID '(' ArgList ')' {$$=makeFnNode($1->varname,$3);}
  | Field {$$ = $1;}
  ;

ArgList : ArgList ',' expr {attachArg($$,$3);$$=$3;}
        | expr {$$ = $1;}

Field : ID '.' ID {setField($1,$3); $$=$1;}  
      | Field '.' ID {setField($1,$3); $$=$1;}  
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

  //Creating type table with default entries
  TypeTableCreate();

  yyparse();

 return 0;
}

