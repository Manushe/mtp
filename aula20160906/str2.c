#include <stdio.h>
#include <string.h>
int main()
{
    char frase[256], mensagem[256];
    int j=0, i;
    printf("Digite a frase: \n");
    fgets(frase,200,stdin);
    fflush(stdin);
    mensagem[j]=frase[0];
    j++;
    for(i=0; frase[i]!='\0'; i++)
    {
        if(frase[i]==' ')
        {
            mensagem[j]=frase[i+1];
            j++;
        }
    }
    printf("\nA mensagem oculta eh: \n%s", mensagem);
    return 0;
}
