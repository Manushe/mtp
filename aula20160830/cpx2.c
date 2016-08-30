#include<stdio.h>
#include<complex.h>
#include<math.h>
int main()
{
	double complex z1,raiz;
	double r_z1,i_z1;
	printf("\nReal de z:"); scanf("%lf", &r_z1);
	printf("\nImaginario de z:"); scanf("%lf", &i_z1);
	z1=r_z1+ i_z1*I;
	raiz= sqrt (z1);
	printf("\nA raiz quadrada eh %lf + %lf*i", creal(raiz), cimag(raiz));
	return 0;}
