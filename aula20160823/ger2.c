#include<stdio.h>
#include<time.h>

int main()
{

    int numero, aleatorio;
    srand(time(0));
    aleatorio= rand()%100;
    printf("Digite um numero inteiro entre 0 e 99: ");
    scanf("%d",& numero);
    while(numero!=aleatorio)
    {
    if(numero<aleatorio)
        printf("\nBaixo");
    if(numero>aleatorio)
        printf("\nAlto");
    printf("\nEscolha outro numero:");
    scanf("%d",& numero);
    }
    if(numero==aleatorio)
    printf("\nAcertou!!!!!!!!");
    printf("\nO numero sorteado foi %d.",aleatorio);

return 0;}
