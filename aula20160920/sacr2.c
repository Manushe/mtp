#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int lanca_dado();
int main()
{
    int valor;
    srand(time(0));
    valor= lanca_dado();
    if(valor>=21)
        printf("\n  VOCE GANHOU CONGRATS!!!!\n");
    else
        printf("\n   NAO FOI DESSA VEZ");

    return 0;
}
int lanca_dado()
{
    int i,valor_dado, soma=0;

    for(i=0; i<5;i++)
    {
        valor_dado= rand()%6+1;
        switch(valor_dado){
         case 1: valor_dado= 1;
            break;
        case 2: valor_dado= 2;
         break;
        case 3: valor_dado= 3;
         break;
        case 4: valor_dado= 4;
         break;
        case 5: valor_dado= 5;
         break;
        case 6: valor_dado= 6;
         break;
         }
        soma=soma+valor_dado;
    }
    return soma;
}
