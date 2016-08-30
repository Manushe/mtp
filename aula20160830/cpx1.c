#include<stdio.h>
#include<complex.h>
int main()
{
	double complex z1,multiplicacao;
	double r_z1,i_z1;
	printf("\nReal de z:"); scanf("%lf", &r_z1);
	printf("\nImaginario de z:"); scanf("%lf", &i_z1);
	z1=r_z1+ i_z1*I;
	multiplicacao= z1*conj(z1);
	printf("\nA multiplicacao eh %lf + %lf*i", creal(multiplicacao), cimag(multiplicacao));
	return 0;}
