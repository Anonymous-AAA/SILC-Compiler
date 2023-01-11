%{

/* 
  Write a lex file To count the number of integers and floating point numbers appearing in the input.
*/


#include<stdio.h>

int integers=0;
int floating=0;

%}

fl      [0-9]*"."[0-9]*   



%option noyywrap

%%

({fl})                                floating++;
(.)*                                  integers++;

%%

int main()
{
  yylex();
  printf("integers: %d\n",integers);
  printf("floats: %d\n",floating);
  return 1;
}
