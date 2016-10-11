#include<stdio.h>
#include<stdlib.h>

void recebenumero(int* numero);
int main()
{
    int * numero;
    numero= malloc(sizeof (int));
    recebenumero(numero);

return 0;
}

void recebenumero(int* numero)
{
    int tamanho=0,soma=0;
    float media;
    int c=0;
    while(c!=2){
        printf("Entre com o numero :\n");
        scanf("%d",&numero[tamanho]);
        soma=soma+numero[tamanho];
        media=soma/(tamanho+1);
        printf("\nA soma eh:%d e a media eh %f. \n", soma, media);
        printf("Deseja adicionar mais algum numero? 1= sim e 2= nao\n");
        scanf("%d",&c);
        if(c==1){
        tamanho++;
        numero=(int *) realloc(numero, (tamanho+1)*sizeof(int));}}
    free(numero);
}
