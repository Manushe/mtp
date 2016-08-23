#include <stdio.h>
int main(){
    int numero;
    printf("Informe o numero a ser analisado: ");
    scanf("%d",&numero);
    if(numero%2==0)
        printf("Esse numero eh par.");
    else
    printf("Esse numero eh impar.");
    if(numero%3==0)
        printf("\nEsse numero eh multiplo de 3.");
    if(numero%5==0)
        printf("\nEsse numero eh multiplo de 5.");
    if(numero%7==0)
        printf("\nEsse numero eh multiplo de 7.");
return 0;}
