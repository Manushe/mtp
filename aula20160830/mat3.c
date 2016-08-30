#include<stdio.h>
#include<math.h>
int main()
{
	float numero,base,logaritmo;
	printf("\nDigite um numero: ");
	scanf("%f",&numero);
	printf("\nA base do logaritmo: ");
	scanf("%f",&base);
	logaritmo=log(numero)/log(base);	
	printf("\nO resultado eh: %f.", logaritmo);
	return 0;
}
