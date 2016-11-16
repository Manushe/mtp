#include<stdio.h>
int main()
{
    FILE*arquivo;
    char *dado[256];
    char * nome[256];
    printf("Qual arquivo deseja abrir? ");
    scanf("%s",nome);
    arquivo=fopen(nome,"r");
    if(arquivo==NULL)
        printf("\nArquivo nao encontrado\n");
    else
    {
         fgets(dado,256,arquivo);
        fscanf(arquivo,"%s",dado);
        fclose(arquivo);
        fprintf(stdout,"%s",dado);
    }
    return 0;
}
