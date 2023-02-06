%{
 #include <stdlib.h>
 #include <stdio.h>
 #include "y.tab.h"
 #include "exprtree.h"
 int yyerror(char const*);
 int number;

%}

%%

[0-9]+ {number = atoi(yytext); yylval.no = makeConstantLeafNode(number); return NUM;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MUL;}
"/" {return DIV;}
"=" {return EQUAL;}
"<" {return LT;}
">" {return GT;}
"<=" {return LE;}
">=" {return GE;}
"!=" {return NE;}
"==" {return EQ;}
[ \t\n] {}
[();,\[\]] {return *yytext;}
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
[a-zA-Z][a-zA-Z0-9]* {yylval.no = makeVariableLeafNode(yytext,yyleng);  return ID;}
\"[^\"\n]*\" {yylval.no = makeConstantStringNode(yytext,yyleng); return STRCON;}
. {yyerror("unknown character ");printf("%s\n",yytext);exit(1);}

%%

int yywrap(void) {
 return 1;
}


