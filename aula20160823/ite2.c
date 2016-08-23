#include <stdio.h>
int main()
{   int B, P;
    int i,potencia=1;
    printf("Digite a base da potencia: ");
    scanf("%d",&B);
	printf("Digite o expoente da potencia: ");
    scanf("%d",&P);
    for(i=0; i<P; i++)
    {
       potencia= potencia*B;
	}
	printf("O valor da potencia eh: %d.", potencia);


return 0;}
