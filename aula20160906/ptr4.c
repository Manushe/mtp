#include <stdio.h>
#include <time.h>
#define N 10000
int main()
{
    srand(time(0));
    int numero,i;
    int vetor[N];
    float soma=0.0;
    printf("\nDigite um numero inteiro nao negativo:");
    scanf("%d", &numero);
    for(i=0; numero<N; i++)
    {
        vetor[i]=rand()%numero+1;
    }
    for(i=0; numero<N; i++)
    soma= soma+vetor[i];
    printf("\nA media eh %g", soma/N);

    return 0;
}
