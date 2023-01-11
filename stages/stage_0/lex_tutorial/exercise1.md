# Exercise 1

In the generated lex.yy.c file, the following code segment can be found under the definition of yylex().


```c
if( ! yyin )
    yyin = stdin;
```

Try to locate this code segment in the file lex.yy.c. What could be the consequences of removing this code segment from lex.yy.c before compiling it for generating the lexical analyzer?


Answer: The consequence of removing the code would be that yyin would be undefined when it is later used and it would lead errors.
