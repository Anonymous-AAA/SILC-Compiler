%{

/* 
Write a lex file to count the number of lines, words, and characters in the input.
*/

#include<stdio.h>

int lines=0;
int characters=0;
int words=0;

%}

chr    [a-zA-Z0-9]



%option noyywrap

%%

({chr})                                characters++;
({chr})+                               words++;
(.)*                                   lines++;

%%

int main()
{
  yylex();
  printf("characters: %d\n",characters);
  printf("words: %d\n",words);
  printf("lines: %d\n",lines);
  return 1;
}
