#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void sorteio( int n);
 int main()
 {
     srand(time(0));
     int n;
     printf("Escolha um numero de 1 a 10:");
     scanf("%d", & n);
     sorteio(n);
return 0;
}

void sorteio( int n)
{
    int sorteio= (rand()%10)+1;
    if(sorteio==n)
        printf("ganhou");
    else
        printf("perdeuuuu");
}
