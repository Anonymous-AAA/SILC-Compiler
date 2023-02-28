# Stage 5
Ditched this idea :I am reserving register R0 for return values from function, as otherwise when restoring register context from stack it could create issues.(I guess?) 

1. Just allocate a register for return before pushing the arguments -> not the best don't know of better ways
2. In checkfn , checking whether its not variable is done by checking the binding in the global symbol table
3. Reduced the number of usable registers to 19 , the 20th register (R19) will be the garbage register
4. Against the specification, the current implementation allows for multiple return statements, even within while and if , but there is type checking implemented.
