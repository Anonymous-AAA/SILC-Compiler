# Stage 5
Ditched this idea :I am reserving register R0 for return values from function, as otherwise when restoring register context from stack it could create issues.(I guess?) 

1. Just allocate a register for return before pushing the arguments -> not the best don't know of better ways
2. I am adding a breakpoint statement, that add brkp in xsm


