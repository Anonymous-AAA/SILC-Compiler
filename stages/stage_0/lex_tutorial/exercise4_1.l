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
   //Initially from the console and then from a file input_file.l
   FILE *newfile_pointer;
   newfile_pointer = fopen("input_file.l","r");
   if(yyin==stdin)
   {
    yyin = newfile_pointer;
      return 0;
   }
   else
    return 1;
}

int main()
{
   yylex();
   return 1;
}
