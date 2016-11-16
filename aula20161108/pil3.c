#include <stdio.h>
#define TAMANHOMAX 2000
typedef float DADO;
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
int i;
float numero;
pilha.idtopo=-1;

printf("Digite os  numeros:\n");
do{
        scanf("%f", &numero);
        if (numero<0)
            break;
        else
        push (&pilha, numero);

}while(1);
while(!empty(pilha)){
    printf ("%g, ", top (pilha));
    pop(&pilha);
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
    fprintf(stderr, "\nESTOUROOOOO POP POP POP!\n");
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
