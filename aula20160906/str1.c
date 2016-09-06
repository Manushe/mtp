#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 256
int main()
{
   char frase[N];
   int indice=0,i;
   printf("\nEntre com a frase: ");
   gets(frase);
   for(i=0; frase[i]!='\0'; i++)
   {
       frase[i]= toupper(frase[i]);
   }
   printf("\nTamanho: %u", strlen(frase));
   if(strncmp(frase,"BOM DIA",7)==0)
    printf("\nBom dia pra vc tb uhu.\n\n");
    else
        printf("\nVoce quis dizer: %s?", frase);

  return 0;


}
