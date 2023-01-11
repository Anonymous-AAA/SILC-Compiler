%{

/* 
Write a lex file to list out all C-like comments (both single line and multi line comments) from a text file.

*/


#include<stdio.h>



%}

multi     "/*"([^*]|\*+[^*/])*\*+"/"
single    "//".*

%option noyywrap

%%

({multi})                               printf("%s\n",yytext);
({single})                               printf("%s\n",yytext);
(.)*                                      ;
%%

int main(int argc, char* argv[])
{
  if(argc>1){

      FILE *fp=fopen(argv[1],"r");
      if(fp)
        yyin=fp;
    }

  yylex();
  return 1;
}
