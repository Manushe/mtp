#include <stdio.h>
#include <math.h>// para o floor (arredonda pra baixo)

struct PIXEL{

unsigned char B;//byte
unsigned char G;
unsigned char R;
};

int main()
{
    struct PIXEL pixel;
    int ofsset, PAL, WPX, HPX, BPP, NCP, NIC,PAL;// dword (4bytes)
    unsigned char byte; // variaveis pra leitura 1byte
    unsigned short word; //variavel pra leitura 2 bytes
    unsigned int dword; // 4 bytes
    FILE * imagem;
    imagem = fopen("lulu.bmp", "r"); // r= read= só leitura

    //2 bytes	0-1	Se for Windows, 'B' e 'M'
    fread(&byte, sizeof(byte),1,imagem);
    printf("%c", byte);
    fread(&byte, sizeof(byte),1,imagem);
    printf("%c\n", byte);
    //dword	2-5	Tamanho do arquivo (bytes)
    fread(&dword,sizeof(dword),1,imagem);
    printf("Tamanho do arquivo: %u\n", dword);
    //word	6-9 Informação reservada
    fread(&word,sizeof(word),1,imagem);
    printf("Informacao reservada: %08X\n", word);
    //dword	10-13	Offset, onde dados da imagem começam
    fread (&dword, sizeof(dword),1,imagem);
    printf("Offset: %u\n", dword);
    //dword	14-17	Tamanho do cabeçalho, a partir daqui
    fread (&dword, sizeof(dword),1,imagem);
    printf("Cabecalho: %u\n", dword);
    //dword	18-21	Largura da imagem (pixels), WPX
    fread (&dword, sizeof(dword),1,imagem);
    printf("Largura da imagem (pixels): %u\n", dword);
    WPX=dword;
     //dword	22-25	Altura da imagem (pixels), HPX
    fread (&dword, sizeof(dword),1,imagem);
    printf("Altura da imagem (pixels): %u\n", dword);
    HPX=dword;
    //word	26-27	Qtde de planos de cores
    fread (&dword, sizeof(dword),1,imagem);
    printf("quantidade de planos de cores: %u\n", dword);
    //28-29 Bits por pixel, BPP
    fread (&word, sizeof(word),1,imagem);
    printf("bits por pixel: %u\n", word);
    BPP=word;
   //dword	30-33	Método de compressão
    fread (&dword, sizeof(dword),1,imagem);
        printf("Método de compressao: %u\n", dword);
    //dword	34-37	Tamanho da imagem
    fread (&dword, sizeof(dword),1,imagem);
    printf("tamanho da imagem (bytes): %u\n", dword);
    //dword	38-41	Resolução horizontal
     fread(&dword,sizeof(dword),1,imagem);
    printf("Resolução horizontal: %u\n", dword);
    //dword	42-45	Resolução vertical
    fread(&dword,sizeof(dword),1,imagem);
    printf("Resolução vertical: %u\n", dword);
    //dword	46-49	Número de cores na paleta, NCP
    fread(&dword,sizeof(dword),1,imagem);
    NCP= (dword==0) ? 1<<BPP: dword; //pow(2,BPP)
    printf("Número de cores na paleta: %u\n", NCP);
    //dword	50-53	Número de cores importantes, NIC
    fread(&dword,sizeof(dword),1,imagem);
    NIC= (dword==0) ? NCP: dword; //pow(2,BPP)
    printf("Número de cores importantes: %u\n", NIC);

    int lap = 0;
    PAL = floor ((BPP*WPX+31.)/32.)*4;
    printf("tamanho da linha da array de pixels (bytes):%u\n", PAL);//Leitura dos pixels
    printf("\nPIXELS ==========\n\n");
    while (!feof(imagem))
    { //leia a informacao do pixel (canais R, G e B)

        if(fread(&pixel, sizeof(pixel),1,imagem))
        printf("R: %u, G:%u, B:%u\n", pixel.R, pixel.G, pixel.B);
        lap = lap +3;
        if((lap+3)>PAL)
        {
            fseek(imagem, (PAL-lap),SEEK_CUR);
            lap=0;
        }
    }
    fclose(imagem);
        return 0;
    }
