%{
    #include <stdio.h>
    #include "y.tab.h"

   int yywrap();
%}

%%

[A-Za-z] {
          yylval.character=*yytext;
          return CH;
        }
"*"   return *yytext;
"/"   return *yytext;
"+"   return *yytext;
"-"   return *yytext;
[()]   return *yytext;
[\n]      return NEWLINE;

%%

int yywrap()
{
 return 1;
}
