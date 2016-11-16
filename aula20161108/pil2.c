#include <stdio.h>
#include <stdlib.h>
typedef int DADO;
typedef struct Pilha_{
DADO topo;
struct Pilha_* proximo;
}Pilha;
void push (Pilha ** ppilha, DADO elemento);
void pop (Pilha ** ppilha);
DADO top (Pilha * pilha);
int empty (Pilha * pilha);
int main (){
Pilha * pilha= NULL;
int i;

printf("Push: ");
for (i=0;i<5;i++){
        push (&pilha, i);
        printf("%d", top(pilha));
}
printf("\nPop: ");
while(!empty(pilha)){
    printf ("%d", top (pilha));
    pop(&pilha);
}
return 0;}
void push (Pilha ** ppilha, DADO elemento)
{
  Pilha * novo= (Pilha*) malloc (sizeof(Pilha));
  novo->topo=elemento;
  novo->proximo=*ppilha;
  *ppilha = novo;
}
void pop (Pilha ** ppilha)
{
    Pilha * aux=NULL;
    if (!empty(*ppilha))
    {
        aux= (*ppilha)->proximo;
        free(*ppilha);
        *ppilha=aux;
    }
    else
        fprintf(stdout, "ERRO!!!!!! A pilha esta vazia doidao!\n");
}
DADO top (Pilha * pilha){
return pilha->topo; }
int empty (Pilha * pilha)
{
return (pilha== NULL);
}
