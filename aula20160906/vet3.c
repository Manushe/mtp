#include <stdio.h>
int main () {
    int vet[10];
    int i, soma=0, produto=1;
    for(i=0; i<10; i++){
        printf("Digite o %d numero para preencher o vetor: ",i+1);
        scanf("%d",&vet[i]);
        soma=soma+vet[i];
        produto=produto*vet[i];
    }
    printf("\nSoma= %d",soma);
    printf("\nProduto %d",produto);
    return 0;
}
