#include<stdio.h>

int soma(int *A, int N);

int main()
{
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int N = sizeof(A)/sizeof(int);
	printf("A soma dos numeros do vetor e: %d.", soma(A,N));
	
 return 0;
}

int soma (int *A, int n)
 { 
 int tamanho= tamnaho-1;
   return(n==0)? 0: A(tamanho)+ soma(A, n-1);
 }

