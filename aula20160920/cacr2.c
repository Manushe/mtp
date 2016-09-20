#include<stdio.h>
#include<math.h>
int raiz(int a, int b, int c);
int main()
{
    int a, b,c;
    float d, raiz1, raiz2;

    printf("Entre com o coeficiente a da funcao: ");
    scanf("%d", &a);
    printf("Agora com o b: ");
    scanf("%d", &b);
    printf("E, o c: ");
    scanf("%d", &c);
    d=raiz(a,b,c);
    if(d>0)
    {
          raiz1 = (-b + sqrt(d))/(2*a);
          raiz2 = (-b - sqrt(d))/(2*a);
          printf("As raizes sao: %f e %f." , raiz1, raiz2);
    }
    if(d==0)
    {
        raiz1 = (-b + sqrt(d))/(2*a);
        printf("A raiz e: %f.", raiz1);

    }
    else
        printf("Nao existe raiz real.");
    return 0;
}
int raiz(int a, int b, int c)
{
    int delta;
    delta= b*b-4*a*c;
    return delta;
}
