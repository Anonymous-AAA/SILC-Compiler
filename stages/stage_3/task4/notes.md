1. My implementation of compiler does not have ';' after endif or endwhile
2. The break and continue statements are leaf nodes explaining their disappearance from the tree
3. I am passing the while labels as parameters to codegen, so continue and break can be implemented
4. Corrected error in exprtree.c of makeoperatornode() => left->type!=int && left->type!=int (&& changed to ||)
