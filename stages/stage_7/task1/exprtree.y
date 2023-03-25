%{
 int yyerror(char const *s);
 int yylex(void);
 #include <stdlib.h>
 #include <stdio.h>
 #include "exprtree.c"
 #include "codegen.c"
// #include "symbol.c"
 #include "test.c"
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
 struct Classtable *class;
}

%type <gsym> GidList Gid
%type <lsym> IdList
%type <type> Type
%type <flist> FieldDeclList FieldDecl
%type <no> expr NUM STRCON ID Stmt InputStmt OutputStmt AsgStmt IfStmt WhileStmt BreakStmt ContinueStmt Body ArgList ReturnStmt FreeStmt Field ALLOC INIT NUL BreakPointStmt SELF FieldFunction
%type <param> ParamList Param
%type <class> Cname
%token NUM PLUS MINUS MUL DIV MOD END BEG READ WRITE ID EQUAL IF THEN ELSE ENDIF WHILE DO ENDWHILE LT GT LE GE NE EQ BREAK CONTINUE DECL ENDDECL INT STR STRCON MAIN RET AND OR FREE ALLOC TYPE ENDTYPE INIT NUL BRKP CLASS ENDCLASS EXTENDS NEW DELETE SELF

%left OR
%left AND
%nonassoc LT GT LE GE NE EQ
%left PLUS MINUS
%left MUL DIV MOD

%%




//use evaluate() test() for testing
Program : TypeDefBlock ClassDefBlock GDeclBlock FDefBlock MainBlock {
          //code($3);
          //evaluate($3)
          //test($3)
          printTypeTable();
          printGSymbolTable();
          printClassTable();
          exit(0);
          }
        ;



//Classdef block

ClassDefBlock : CLASS ClassDefList ENDCLASS {Ccurr=NULL;}  //if Ccurr=NULL it indicates class definitions are over
              |
              ;

ClassDefList : ClassDefList ClassDef
             | ClassDef
             ;

ClassDef : Cname '{' ClassDecl MethodDefns '}'
         ;

ClassDecl : DECL Fieldlists MethodDecl ENDDECL { printClassTable();}
          ;

Cname : ID  {$$ = CInstall($1->varname,NULL);}
      | ID EXTENDS ID
      ;

Fieldlists : Fieldlists Fld
           |
           ;

Fld : Type ID ';' {Class_Finstall(Ccurr,$1->name,$2->varname);}
    ;

MethodDecl : MethodDecl MDecl
           | MDecl
           ;

MDecl : Type ID '(' ParamList ')' ';' {Class_Minstall(Ccurr,$2->varname,$1,$4);}
      ;


MethodDefns : MethodDefns Fdef
            | Fdef
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
              | FieldDecl {$$ = $1; Fcurr=$1;Fstart=$1;}
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
          ;


//Function

FDefBlock : FDefBlock Fdef
          |               //can be empty
          ;

Fdef  : Type ID '(' ParamList ')' '{' LDeclBlock BEG Body ReturnStmt END '}' {

        checkType($1);

        $9 = makeConnectorNode($9,$10);  //Attaching the return statement
        
        if(Ccurr)  //if inside class checkMethod
        checkMethod($1,$10->left->type,$2->varname,$4);  //to check definition with declaration
        else
        checkFn($1,$10->left->type,$2->varname,$4);  //to check definition with declaration

        test($9);
        codeFunction($9,$2->varname);       //Generating code
        printLSymbolTable($2->varname); //Printing the local symbol table
        deallocateLST();     //deallocating the Local Symbol Table
        deallocateAST($9);  //deallocating the AST
      }
      ;

ParamList : ParamList ',' Param {$$=$3; createParamList($1,$3);} 
          | Param {$$=$1;} //Pcurr is maintained as end of the param list
          | {$$=NULL;}
          ;

Param : Type ID {checkType($1);$$=createParams($1,$2->varname);}
      ;


Type : INT {$$ = inttype;} 
     | STR {$$ = strtype;}
     | ID  {checkInvalidTypes($1);$$ = TLookup($1->varname);}
     ;


LDeclBlock  : DECL LDecList ENDDECL {if(Ccurr){LInstallSelf(Ccurr);}} //install self to Lst if inside class 
            | {if(Ccurr){LInstallSelf(Ccurr);}} //install self to Lst if inside class even if it is empty
            ;

LDecList  : LDecList LDecl
          | LDecl
          ;

LDecl : Type IdList ';'{checkType($1);setLType($2,$1);}
      ;

IdList  : IdList ',' ID {$$=$1; LInstallVar($3->varname,voidtype,FALSE);}  //False becuse they are local variables
        | ID {$$=LInstallVar($1->varname,voidtype,FALSE);}


Body    : Body Stmt {$$ = makeConnectorNode($1,$2);}
        |  {$$ = NULL;}   //can be empty
        ;

Stmt : InputStmt {$$ = $1;}
     | OutputStmt {$$ = $1;}
     | AsgStmt {$$ = $1;}
     | IfStmt {$$ = $1;}
     | WhileStmt {$$ = $1;}
     | BreakStmt {$$ = $1;}
     | ContinueStmt {$$ = $1;}
     | BreakPointStmt {$$ = $1;}
     | FreeStmt {$$ = $1;}
     ;

FreeStmt : FREE '(' ID ')' ';' { setEntry($3); 
                                 $$=makeSingleNode(FREE,$3);
                                 }
        | FREE '(' Field ')' ';' { $$=makeSingleNode(FREE,$3);}

        | DELETE '(' Field ')' ';'

        | DELETE '(' ID ')' ';'
        ;


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
                                        $3=makeNoChildNode(ALLOC);
                                        $3->type=nulltype;
                                        $$ = makeOperatorNode(EQUAL,$1,$3);
                                        }
        | Field EQUAL ALLOC '(' ')' ';'  {$3=makeNoChildNode(ALLOC);
                                                $3->type=nulltype;
                                                $$ = makeOperatorNode(EQUAL,$1,$3);
                                        }
        | ID EQUAL INIT '(' ')' ';' {setEntry($1);
                                        $3=makeNoChildNode(INIT);
                                        $3->type=inttype;   //initialize returns integer value
                                        $$ = makeOperatorNode(EQUAL,$1,$3);
                                        }
        | Field EQUAL expr ';' { $$ = makeOperatorNode(EQUAL,$1,$3);}

        | ID EQUAL NEW '(' ID ')' ';'


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

BreakPointStmt : BRKP ';' {$$ = makeNoChildNode(BRKP);}

ReturnStmt : RET expr ';' {
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
  | NUL {$$ = makeNullNode();}
  | FieldFunction {$$ = $1;}
  ;

ArgList : ArgList ',' expr {attachArg($$,$3);$$=$3;}
        | expr {$$ = $1;}

Field : ID '.' ID {setField($1,$3); $$=$1;}  //will not occur inside class
      | Field '.' ID {setField($1,$3); $$=$1;}  
      | SELF '.' ID {$1=makeNoChildNode(SELF);setField($1,$3);$$=$1;}
      ;

FieldFunction : SELF '.' ID '(' ArgList ')' {$1=makeNoChildNode(SELF);setMethodNode($1,$3->varname,$5);$$=$1;} //will not occur inside class
              | ID '.' ID  '(' ArgList ')'{setMethodNode($1,$3->varname,$5);$$=$1;}
              | Field '.' ID  '(' ArgList ')'{setMethodNode($1,$3->varname,$5);$$=$1;}


%%

int yyerror(char const *s)
{
    extern int yylineno;
    printf("Error: %s at line %d\n",s,yylineno);
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

