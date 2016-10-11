#include<stdio.h>
#include<stdlib.h>// realloc e malloc

char *inicializatexto();
char * recebetexto(char* texto);
int main()
{
char * texto;
texto= inicializatexto(); // dentro do texto(memoria estatica) chama um endere�o da memoria dinamica
printf("Entre com seu texto e termine com # + enter :\n");
texto= recebetexto(texto);
printf("O que tem na heap :\n");
printf("%s\n", texto);
free(texto);//N�O ESQUECE O FREE PORRA
return 0;
}

char * inicializatexto()// malloc e calloc s� usam void= uso do (char *) para transformar o tipo da fun��o
{
    char *texto;
    texto=(char *) malloc(sizeof(char));// cria��o de um endere�o de um char na memoria heap
    texto[0]='\0';
    return texto; // mandando pra main o endere�o da char criada na fun��o auxiliar
}
char * recebetexto(char* texto)// passando por referencia(vetor usa 2*)= modifica o vetor original ou *recebetexto(char *texto)
{
    int c,tamanho=0;
    do{
        c = getchar();// qndo usa inteiro garante o tamanho de 8 bits, a char talvez tenha s� 7, o getchar pega
    if(c!='#'){

        tamanho++;//adc inclusive espa�o e enter
        texto=(char*) realloc(texto, (tamanho+1)*sizeof(char));//(endere�o atual, novo tamanho/ +1= \0
        texto[tamanho]='\0';
        texto[tamanho-1]= c;
    }
    }while(c!='#');//loop continua ate digitar #
    return texto;
}
