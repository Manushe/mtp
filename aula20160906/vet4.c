#include <stdio.h>
int main () {
    int num,i, maximo, minimo;
    int vet[1000];
    printf("Informe um numero nao negativo entre 1 e 1000: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
        vet[i]=rand()%10;
    maximo=vet[0];
    minimo=vet[0];
    for(i=0;i<num;i++){
        if(vet[i]>=maximo)
            maximo=vet[i];
        if(vet[i]<=minimo)
            minimo=vet[i];
    }
    printf("O maximo e o minimo do vetor sao respectivamente: %d e %d",maximo,minimo);
    return 0;
}
