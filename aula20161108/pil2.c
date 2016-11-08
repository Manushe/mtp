
#include<stdio.h>


typedef struct Pilha_ {
int idtopo;
int * dado;
}Pilha;


void push(Pilha *pilha, int dado)
{
    (*pilha).idtopo++;
    if((*pilha).dado==NULL);

        (*pilha).dado=(int*) malloc(sizeof(int));
     else
        (*pilha).dado=(int*) realloc((*pilha).dado, (*pilha).idtopo*sizeof(int));
    (*pilha).dado[(*pilha).idtopo]=dado;

}
void pop(Pilha * pilha)
{
    if((*pilha).idtopo-1>= -1)
        (*pilha).idtopo--;
        if((*pilha).idtopo== -1)
            (*pilha).dado=NULL;
        else(*pílha).dado=(int*) realloc((*pilha).dado,(*pilha).idtopo*sizeof(int));

}
int * top(Pilha pilha)
{
    return pilha.dado[pilha.idtopo];
}

int empty(Pilha pilha)
{
    return (pilha.idtopo == -1);
}
int main()
{
    Pilha pilha;
    int i;
    pilha.idtopo= -1;
    for(i=0;i<5;i++)
      {
          printf("%d ",'A'+i);
          push(&pilha, i+50);
      }
      printf("\n");
    while(!empty(pilha))
    {
        printf("%d ", top(pilha));
        pop(&pilha);//tem que mandar o endereço & por estar mandando por referencia
    }
    return 0;
}
