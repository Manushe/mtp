#include <stdio.h>
#include <ctype.h>
int main()
{
    int indice=0;
    int numero=0;
    char investigador;
    char frase[256];
    printf("Escreva uma frase: ");
    gets(frase);
    investigador= frase[indice];
    while(investigador)
    {
        frase[indice] = isalpha(investigador);
        indice++;
        numero++;
        investigador= frase[indice];
        if(frase[indice] = isspace(investigador);)
		numero--;
    }
    printf("\nA frase possui %d de digitos", numero);
    return 0;
}
