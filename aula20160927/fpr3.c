#include<stdio.h>
void compara(int *vetorA, int n, int *vetorB, int m);
int main()
{
    int vetorA[]= {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int vetorB[]= {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
    int n=sizeof(vetorA)/sizeof(int);
    int m= sizeof(vetorB)/sizeof(int);
    compara(vetorA,n, vetorB,m);
    return 0;
}

void compara(int *vetorA, int n, int *vetorB, int m)
{
    int i, j;
    for(i=0; i<n; i++)
    { for(j=0;j<m;j++)
       {
        if(vetorA[i]==vetorB[j])
            printf("%d  ", vetorA[i]);
       }
    }
}
