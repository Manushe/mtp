#include <stdio.h>
#include<math.h>
#define N 5
float media (float *matriz);
void desviopadrao(float *matriz);

int main()
{
    int i;
    float matriz[N];
    printf("Entre com 5 numeros: ");
    for(i=0;i<N;i++)
        scanf("%f",&matriz[i]);
    printf("A media desses numeros eh: %f.", media(matriz));
    desviopadrao(matriz);
    return 0;
}
float media (float *matriz)
{
    int i;
    float med=0.0;
    for(i=0;i<N;i++)
        med= med+ matriz[i];
    return med=med/N;
    printf("A media desses numeros eh: %f.", med);
}
void desviopadrao(float *matriz)
{
    int i;
    float m= media(matriz);
    float soma= 0.f;
    for(i=0;i<N;i++)
        soma+=pow(m-matriz[i],2.f);
    soma=sqrt(soma/(N-1));
    printf("O desvio padrao eh: %f.", soma);
}

