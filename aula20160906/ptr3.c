#include <stdio.h>
#include <stdint.h>
int main()
{
    int a, b,soma=0;
    unsigned char * pont3;
    printf("\nDigite dois numeros reais:");
    scanf("%d %d", &a,&b);
    soma=a+b;
    printf("\n Endereco de memoria do primeiro numero: %p", &a);
    printf("\n Endereco de memoria do segundo numero:%p", &b);
    printf("\n Endereco de memoria soma:%p e seu resultado %d", &soma, soma);
    return 0;
}
