
#include <stdio.h>
#include<math.h>
int main(){
int i=1;
float numero, inversao=0,soma=0;
printf("\nDigite um numero: ");
scanf("%f",&numero);
inversao=1.0/(numero);
printf("%f , %f",inversao, soma);
while (i<729)
{
 soma=soma+inversao;
 i++;

 }
  printf("\nA soma eh: %f", soma);
 
return 0;}
