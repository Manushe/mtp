#include <stdio.h>
#define TAMANHOMAX 1024
typedef int DADO;
typedef struct Pilha_{
int idtopo;
DADO dados[TAMANHOMAX];
}Pilha;
void push (Pilha * ppilha, DADO elemento);
void pop (Pilha * ppilha);
DADO top (Pilha pilha);
int empty (Pilha pilha);
int main (){

Pilha pilha;
int aux, BIT, numero;
pilha.idtopo=-1;

printf("Digite um numero inteiro:\n");
scanf("%d", &aux);
while (aux>0)
{
    BIT=aux%2;
    aux = aux/2;
    push(&pilha, BIT);
}
while(!empty(pilha)){
    printf ("%d", top (pilha));
    pop(&pilha);;
}

return 0;}
void push (Pilha * ppilha, DADO elemento)
{
    if (ppilha->idtopo+1< TAMANHOMAX)
        {
            ppilha->idtopo++;
            ppilha->dados[ppilha->idtopo]=elemento;
        }
    else
    fprintf(stderr, "\nESTOUROOOOOOO POP POP POP!\n");
}
void pop (Pilha * ppilha)
{
    if (ppilha->idtopo>=0)
    {
        ppilha->dados[ppilha->idtopo]=0x0;
        ppilha->idtopo--;

    }
    else
        fprintf(stdout, "ERRO!!!!!! A pilha esta vazia doidao!\n");
}
DADO top (Pilha pilha){
return pilha.dados[pilha.idtopo]; }
int empty (Pilha pilha)
{
return (pilha.idtopo==-1);
}
