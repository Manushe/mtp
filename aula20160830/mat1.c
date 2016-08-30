#include<stdio.h>
#include<math.h>
int main()
{
	float lado1, lado2, angulo, lado3;
	printf("\nDigite o lado 1: ");
	scanf("%f", &lado1);
	printf("\nDigite o lado 2: ");
	scanf("%f", &lado2);
	printf("\nAgora, digite o angulo do triangulo em radianos:");
	scanf("%f", &angulo);
	lado3 = sqrt(pow(lado1,2.)+pow(lado2,2.)-(2.0*lado1*lado2*cos(angulo)));
	printf("\nO terceiro lado do triangulo eh: %f.",lado3);
	return 0;
}
