%{

/* 
Write a lex file to list out all words of length three, starting with 'A' to uppercase.
*/


#include<stdio.h>



%}

pattern     A[A-Z]{2}



%option noyywrap

%%

({pattern})                               printf("%s\n",yytext);
(.)*                                      ;
%%

int main()
{
  yylex();
  return 1;
}
