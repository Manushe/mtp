#include<stdio.h>
int main()
{
    FILE*arquivo;
    char dado[256];
    arquivo=fopen("meutexto.txt","r");
    fgets(dado,256,arquivo);
    fscanf(arquivo,"%s",dado);
    fclose(arquivo);
    fprintf(stdout,"%s",dado);
    return 0;
}
