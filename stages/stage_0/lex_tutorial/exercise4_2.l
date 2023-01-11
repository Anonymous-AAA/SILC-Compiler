%{
 #include<stdio.h>
 char *file1;
%}

%%

[0-9]+  printf("number");

%%

int yywrap()
{
  //Suggest a modification in the above example LEX program to make the generated lexical analyzer read input
  //Initially from a file input_file.l and then from the console

   if(yyin!=stdin)
   {
    yyin = stdin;
      return 0;
   }
   else
    return 1;
}

int main()
{
 file1="input_file.l";
   yyin = fopen("input_file.l","r");
   yylex();
   return 1;
}
