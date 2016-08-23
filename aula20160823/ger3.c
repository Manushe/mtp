#include<stdio.h>
int main()
{
int numero,i, soma=1;
printf("Digite um numero: ");
scanf("%d", &numero);
for(i=2; i<numero; i++)
{
    if(numero%i==0)
    soma=soma+i;
}
if(soma==numero)
printf("\nEsse numero eh perfeito.");
else
printf("\nEsse nao eh um numero perfeito;");
return 0;}
