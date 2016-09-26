#include <stdio.h>
#include <time.h>

void sorteio(int a);
int main () {
    srand(time(0));
    int num, a, i;
    printf("Informe um numero de 1 a 10: ");
    scanf("%d",&num);
    for(i=0; i<10; i++)
    sorteio(num);
    return 0;
}
void sorteio(int a) {
    int num_sorteado=rand()%10 + 1;
    printf("%d ",num_sorteado);
    if(a == num_sorteado)
        printf("Parabens!");
    printf("\n");
}
