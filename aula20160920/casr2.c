#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main()
{ int i;float f; char c;
    printf("\nEntre com um inteiro:  ");
    recebe_dado('i',&i);
    printf("\nEntre com um float: ");
    recebe_dado('f', &f);
    printf("\nEntre com um caracter");
    recebe_dado('c',&c);
    printf("\nQuadrado: %d;\nRaiz %f;\nCaractere: %c.\n", i*i, sqrt(f),isupper(c)? tolower(c):toupper(c));

return 0;
}

void recebe_dado(char tipo, void * endereco)
{
    switch(tipo){
    case 'i':scanf("%d",(int *)endereco); break;
    case 'f':scanf("%f",(float *)endereco); break;
    case 'c':scanf("%c",(char *)endereco); break;
    }
   // while (c=getchar() !=EOF && c!= '\n');
}
