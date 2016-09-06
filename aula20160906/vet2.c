#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{

    int i,j=N;
    int aux;
    int vetor[N];
    printf("\nEntre com os 10 numeros dos vetor please:");
    for(i=0; i<N; i++) scanf("%d", &vetor[i]);
    for(i=0; i<N+1/2; i++){
        aux= vetor[i];
        vetor[i]=vetor[j];
        vetor[j]=aux;
        j--;}
    for(i=0; i<N; i++)
        printf("\n%d  ", vetor[i]);
    return 0;
}
