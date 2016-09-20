
#include <stdio.h>

void pares();
void impares();
int main(){
int escolha;
printf(" Se voce deseja ver os pares de 1 a 10 digite 1, os impares, digite 2: ");
scanf("%d", &escolha);
if(escolha==1)
    pares();
if(escolha==2)
    impares();
return 0;

}
void pares()
{
    int i;
    for(i=1; i<=10; i++)
     if(i%2==0)
      printf("%d\n",i);

}
void impares()
{
    int i;
    for(i=1; i<=10; i++)
     if(i%2!=0)
      printf("%d\n",i);
}
