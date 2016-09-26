#include <stdio.h>
#include <string.h>
int main()
{
    char vet[200];
    int n, x, k, cont=0, i, j;
    printf("Digite uma frase para verificar se eh um palindromo: \n");
    fgets(vet,200,stdin);
    fflush(stdin);
    n=strlen(vet);
    n--;
    for (i=0 ; i<=n; i++)
    {
        if((vet[i]>=32 && vet[i]<=47) || (vet[i]>=58 && vet[i]<=64) || (vet[i]>=91 && vet[i]<=96) || (vet[i]>=123 && vet[i]<=126))
        {
            x=0;
            for (j=1; j<=n-i ;j++)
            {
                vet[i+x]=vet[i+j];
                x++;
            }
            n--;
            i--;
        }
    }
    for (i=0; vet[i]!='\0'; i++)
        if (vet[i]>='A' && vet[i]<='Z')
            vet[i] = vet[i]+('a'-'A');
    k=n;
    for (j=0; j<=n; j++)
        if (vet[j]==vet[k])
        {
            cont++;
            k--;
        }
    if (cont==n+1)
        printf("E um palindromo UHU!");
    else
        printf("Nao e um palindromo, very sad")
    return 0;
}
