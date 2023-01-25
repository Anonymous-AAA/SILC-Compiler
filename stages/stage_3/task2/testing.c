#include <stdio.h>

int main(){
    FILE *fp= fopen("target.xsm","r");
    fseek(fp,19,SEEK_SET);

    printf("%c\n",fgetc(fp));
    printf("%c\n",fgetc(fp));
    printf("%c\n",fgetc(fp));
    printf("%c\n",fgetc(fp));
    printf("%c\n",fgetc(fp));
    printf("%c\n",fgetc(fp));
    printf("%c\n",fgetc(fp));
    printf("%c\n",fgetc(fp));
    printf("%c\n",fgetc(fp));
    printf("%c\n",fgetc(fp));
    printf("%c\n",fgetc(fp));
    printf("%c\n",fgetc(fp));
}
