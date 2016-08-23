#include <stdio.h>
int main()
{
    int i;
    int B,P,potencia=1;
    printf("Digite a base da potencia: ");
    scanf("%d",&B);
    printf("Digite o expoente da potencia: ");
    scanf("%d",&P);

    for(i=0; i<P;i++)
    {
        potencia=potencia*B;

    }
    printf("\nO resultado da potencia eh: %d",potencia);

return 0;}
