#include <stdio.h>
int main()
{   int i;
    int numero;
    printf("Digite um numero: ");
    scanf("%d",&numero);
    for(i=2; i<numero; i++)
    {
       if(numero%i==0)
       {
        printf("\nEsse numero nao eh primo.");
        break;
       }}
        if(i==numero)
        printf("\nEsse numero eh primo uhu.");


return 0;}
