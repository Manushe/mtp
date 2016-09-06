#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{

    int numero,i;
    int vetor[N];
    printf("\nEntre com os 10 numeros dos vetor please:");
    scanf("%d", &numero);
    for(i=0; numero<N; i++)
    {
        scanf("%d", vetor[i]);
    }
    for(i=0; numero<N; i++)
        printf("%d", vetor[i]);
    return 0;
}
