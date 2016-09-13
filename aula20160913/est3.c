
#include <stdio.h>
#include <math.h>

#define N 100

typedef struct CADASTRO {
        char nome[256];
        int idade;
        int telefone;
        }CADASTRO;

int main()
{
    struct CADASTRO pessoa;
    printf("Informe a quantidade de cadastros necessarios: ");
    int n;
    for(n=0; n<N; n++)
    {
        printf("Preencha o nome da pessoa: ");
    get_s("%s",&pessoa.nome);
    printf("\nIdade: ");
    scanf("%d",&pessoa.idade);
    printf("\nTelefone: ");
    scanf("%d",&pessoa.telefone);
    }
    return 0;
}

