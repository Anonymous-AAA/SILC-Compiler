%{
 #include <stdlib.h>
 #include <stdio.h>
 #include "y.tab.h"
 #include "astree.h"
 int yyerror(char const*);
 int number;

%}

%%

[0-9]+ {number = atoi(yytext); yylval.no = makeConstantLeafNode(number); return NUM;}
[a-z] {yylval.no = makeVariableLeafNode(*yytext);  return ID;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MUL;}
"/" {return DIV;}
"=" {return EQUAL;}
[ \t\n] {}
[();] {return *yytext;}
"end" {return END;}
"begin" {return BEG;}
"read" {return READ;}
"write" {return WRITE;}
. {yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
 return 1;
}


