#include<stdio.h>
#include<stdlib.h>
int recebenumeros(int *numeros,int n);
void maioremenor(int *numeros,int n);
void media(int *numeros,int n);
int main()

{
    int *numeros=malloc(sizeof(int));
    int n,op,k;
     printf("\nQuantos numeros deseja? ");
        scanf("%d",&n);
       numeros= recebenumeros(numeros,n);
   do
   {


        printf("Escolha:\n(1)Media\n(2)Maior e Menor numero\n(3)Mais numeros?\n(4)Sair\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                media(numeros,n);
            break;
            case 2:
                maioremenor(numeros,n);
            break;
            case 3:
                printf("Quantos a mais? ");
                scanf("%d",&k);
                n=n+k;
                numeros=recebenumeros(numeros,n);
                break;
        }

    }while(op!=4);
    free(numeros);
    return 0;
}
int recebenumeros(int *numeros,int n)
{
    int i=0;
    while(i<n)
    {
        scanf("%d",&numeros[i]);
        numeros=(int *)realloc(numeros,(n+1)*sizeof(int));
        i++;

    }
    system("cls");
    return numeros;
}
void media(int *numeros,int n)
{
   int aux=0,i;
   for(i=0;i<n;i++)
   {
       aux=aux+numeros[i];
   }
    system("cls");
    printf("Media: %g\n\n",(float)aux/n);


}
void maioremenor(int *numeros,int n)
{
    system("cls");
    int i,p=numeros[0];
    for(i=0;i<n;i++)
    {
        if(numeros[i]>p)
            p=numeros[i];
    }
    printf("Maior: %d\n",p);
    p=numeros[0];
    for(i=0;i<n;i++)
    {
        if(numeros[i]<p)
            p=numeros[i];
    }
    printf("Menor: %d\n",p);

}
