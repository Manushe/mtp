#include <stdio.h>

struct soma_racionais{
    int numerador;
    int denominador;
    };

struct soma_racionais soma(int numerador1, int denominador1, int numerador2, int denominador2);

int main(){
    struct soma_racionais resposta;
    int numerador1, denominador1, numerador2, denominador2;
    printf("Entre com o primeiro numero:  ");
    scanf("%d/%d", &numerador1,&denominador1);
    printf("Entre com segundo numero: ");
    scanf("%d/%d", &numerador2,&denominador2);
    resposta= soma(numerador1,denominador1,numerador2,denominador2);
    printf("A soma eh: %d/%d", resposta.numerador, resposta.denominador);
    return 0;
    }

struct soma_racionais soma(int numerador1,int denominador1,int numerador2, int denominador2)
{
    struct soma_racionais resposta;
    resposta.numerador= denominador2*numerador1+ denominador1*numerador2;
    resposta.denominador= denominador1*denominador2;
    return resposta;
}
