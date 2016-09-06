#include <stdio.h>
#include <stdint.h>
int main()
{
    int vetor[]={0,1,2,4,8};
    int contagem=0;
    int tamanho= sizeof(vetor)/ sizeof(int);
    unsigned char * ponteiro= NULL;
    ponteiro=(unsigned char *) &vetor;
    for( ; ponteiro<vetor+tamanho ; ponteiro++)
    {
        printf("%p: %x\n", ponteiro, *ponteiro);
        if(* ponteiro==0x0) contagem++;
    }
    printf("\nSao %d os bytes de memoria com zeros.\n", contagem);
    return 0;
}
