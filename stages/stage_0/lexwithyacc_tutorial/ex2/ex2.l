%{
    #include <stdio.h>
    #include "y.tab.h"

   int yywrap();
%}

%%

[A-Za-z]* {
          yylval.name=yytext;
          return VAR;
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
