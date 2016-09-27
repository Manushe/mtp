#include<stdio.h>

int main()
{
	int a,n, possibilidades;
	printf("Entre com o numero total de bolas: ");
	scanf("%d", &a);
	printf("Informe quantas bolar vc quer retirar: ");
	scanf("%d", n)
	possibilidades= pascal(a,n);

    return 0;
}

int pascal(int vetor[],int a, int n)
{
    return (a==1)? 0: pascal(a*(a-1))/n;
}

