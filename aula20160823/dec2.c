#include <stdio.h>
#include <time.h>
int main(){
    srand(time(0));
    int numero, soma, valor;
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d",&numero);
    valor=rand()%2;
    soma= numero+valor;
    printf("A soma eh: %d.", soma);
    if(soma%2==0)
        printf("\nEssa soma eh par.");
    else
        printf("\nEssa soma eh impar.");

    return 0;}
