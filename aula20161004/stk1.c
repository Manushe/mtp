#include<stdlib.h>
#define N 2
#define M 4

void recebematriz(float matriz[N][M]);
void imprimematriz(float matriz[N][M]);
void transpostamatriz(float matriz[N][M], float transposta[M][N]);
void imprimetransposta(float transposta[M][N]);
int main()
{
    float matriz[N][M],transposta[M][N];
    recebematriz(matriz);
    imprimematriz(matriz);
    transpostamatriz(matriz, transposta);
    printf("\nA transposta eh:");
    imprimetransposta (transposta);
    return 0;
}

void recebematriz(float matriz[N][M]) // REFERENCIA
{
    int i,j;
    for(i=0;i<N; i++)
        for(j=0;j<M;j++)
        {
            printf("Entre com elemento (%d,%d): ", i+1,j+1);
            scanf("%f",&matriz[i][j]);
        }

}
void imprimematriz(float matriz[N][M])
{
    int i,j;
    printf("\nMatriz %dx%d: \n", N,M);
    for(i=0;i<N; i++)
        for(j=0;j<M;j++)
        {
            printf("%g%c", matriz[i][j], (j!=M-1)? '\t': '\n');
        }

}
void transpostamatriz (float matriz[N][M], float transposta[M][N])
{
    int i,j;
    for(i=0;i<N;i++)
        for(j=0;j<M;j++)
            transposta[j][i]=matriz[i][j];

}
void imprimetransposta(float transposta[M][N])
{
    int i,j;
    printf("\nMatriz %dx%d: \n", M,N);
    for(i=0;i<M; i++)
        for(j=0;j<N;j++)
            printf("%g%c", transposta[i][j], (j!=N-1)? '\t': '\n');
}

