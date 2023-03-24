%{
 #include <stdlib.h>
 #include <stdio.h>
 #include "y.tab.h"
 #include "exprtree.h"
 int yyerror(char const*);
 int number;

%}

%option yylineno

%%

[0-9]+ {number = atoi(yytext); yylval.no = makeConstantLeafNode(number); return NUM;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MUL;}
"/" {return DIV;}
"%" {return MOD;}
"=" {return EQUAL;}
"<" {return LT;}
">" {return GT;}
"<=" {return LE;}
">=" {return GE;}
"!=" {return NE;}
"==" {return EQ;}
"||" {return OR;}
"&&" {return AND;}
[ \t\n] {}
[();,\[\]{}\.] {return *yytext;}
"end" {return END;}
"begin" {return BEG;}
"read" {return READ;}
"write" {return WRITE;}
"if" {return IF;}
"then" {return THEN;}
"else" {return ELSE;}
"endif" {return ENDIF;}
"while" {return WHILE;}
"do" {return DO;}
"endwhile" {return ENDWHILE;}
"break" {return BREAK;}
"continue" {return CONTINUE;}
"decl" {return DECL;}
"enddecl" {return ENDDECL;}
"int" {return INT;}
"str" {return STR;}
"main" {return MAIN;}
"return" {return RET;}
"initialize" {return INIT;}
"alloc" {return ALLOC;}
"free" {return FREE;}
"type" {return TYPE;}
"endtype" {return ENDTYPE;}
"null" {return NUL;}
"breakpoint" {return BRKP;}
"class" {return CLASS;}
"endclass" {return ENDCLASS;}
"extends" {return EXTENDS;}
"new" {return NEW;}
"delete" {return DELETE;}
"self" {yylval.no = makeVariableLeafNode(yytext,yyleng); return SELF;}
[a-zA-Z][a-zA-Z0-9_]* {yylval.no = makeVariableLeafNode(yytext,yyleng);  return ID;}
\"[^\"\n]*\" {yylval.no = makeConstantStringNode(yytext,yyleng); return STRCON;}
\/\/.*  {}  //comments
. {yyerror("unknown character ");printf("%s\n",yytext);exit(1);}

%%

int yywrap(void) {
 return 1;
}


