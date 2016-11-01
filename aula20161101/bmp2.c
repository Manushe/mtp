#include <stdio.h>
#include <math.h>// para o floor (arredonda pra baixo)

struct PIXEL{

unsigned char B;//byte
unsigned char G;
unsigned char R;
};

int main()
{
    struct PIXEL pixel1, pixel2;
    int WPX, HPX, BPP, NCP, NIC,PAL;// dword (4bytes)
    unsigned char byte; // variaveis pra leitura 1byte
    unsigned short word; //variavel pra leitura 2 bytes
    unsigned int dword; // 4 bytes
    FILE * imagem1, imagem2;
    imagem=fopen("sapo.bmp","r");
