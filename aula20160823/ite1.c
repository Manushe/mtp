#include <stdio.h>
int main(){
int i;
int numero, fatorial=1;
printf("Fatorial de: ");
scanf("%d",&numero);
for(i=2;i<=numero; i++)
    fatorial= fatorial*i;
printf("O fatorial de %d eh: %d.", numero, fatorial);
return 0;
}
