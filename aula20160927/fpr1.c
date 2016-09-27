#include <stdio.h>

void divisao(int dividendo, int divisor, int *pquociente, int *presto);

int main(){
 int dividendo, divisor;
 int quociente, resto;
 printf("Entre com o dividendo: ");
 scanf("%d", &dividendo);
 printf("Agora o divisor: ");
 scanf("%d", &divisor);
 divisao(dividendo, divisor,&quociente,&resto);
 printf("Quociente: %d, resto: %d", quociente, resto);
return 0;
}

void divisao(int dividendo, int divisor, int *pquociente, int *presto)
{
    *pquociente= dividendo/ divisor;
    *presto= dividendo%divisor;
}
