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
float numero;
FILE * arquivo;
arquivo= fopen("dados.txt", "rb");
pilha.idtopo=-1;

do{
        fscanf(arquivo, "%f\n", &numero);
        push (&pilha, numero);

}while(!feof(arquivo));
while(!empty(pilha)){
    printf ("%g, ", top (pilha));
    pop(&pilha);
}
fclose(arquivo);
return 0;}
void push (Pilha * ppilha, DADO elemento)
{
    if (ppilha->idtopo+1< TAMANHOMAX)
        {
            ppilha->idtopo++;
            ppilha->dados[ppilha->idtopo]=elemento;
        }
    else
    fprintf(stderr, "\nESTOUROOOOO!\n");
}
void pop (Pilha * ppilha)
{
    if (ppilha->idtopo>=0)
    {
        ppilha->dados[ppilha->idtopo]=0x0;
        ppilha->idtopo--;

    }
    else
        fprintf(stdout, "pilha vazia doidao!!!\n");
}
DADO top (Pilha pilha){
return pilha.dados[pilha.idtopo]; }
int empty (Pilha pilha)
{
return (pilha.idtopo==-1);
}
