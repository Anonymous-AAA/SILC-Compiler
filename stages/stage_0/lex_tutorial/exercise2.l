%option noyywrap
%{
 #include <stdlib.h>
 #include <stdio.h>
%}

number [0-9]+

%%

{number} { 
		//Suggest a modification in the above example to check whether a number found is even or odd.	
		int n=atoi(yytext);
		if(n%2==0)
			printf("Found Even number: %d\n",n);
		else
			printf("Found Odd number: %d\n",n);
	}

%%

int main()
{
 yylex();
 return 1;
}
