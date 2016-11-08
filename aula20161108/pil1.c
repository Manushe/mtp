
#include<stdio.h>
#define TAMPILHA 10

typedef struct Pilha_ {
int idtopo;
char * dado[TAMPILHA];
}Pilha;


void push(Pilha *pilha, char dado)
{
    if((*pilha).idtopo+1 <TAMPILHA)
    {
        (*pilha).idtopo++;
        (*pilha).dado[(*pilha).idtopo]=dado;

    } else printf(stderr, "Estouro de pilha doidao\n\n");
}
void pop(Pilha * pilha)
{
    if((*pilha).idtopo-1>= -1)
    {
        (*pilha).idtopo--;
    }
}
char * top(Pilha pilha)
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
          printf("%c ",'A'+i);
          push(&pilha,'A'+i);
      }
      printf("\n");
    while(!empty(pilha))
    {
        printf("%c ", top(pilha));
        pop(&pilha);//tem que mandar o endereço & por estar mandando por referencia
    }
    return 0;
}
