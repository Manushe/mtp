#include<stdio.h>
#include<string.h>
void inverter(char *frase, int n);
int main()
 {
 	
 	char frase[256];
 	printf("Entre com uma frase: ");
 	gets(frase);
 	inverter(frase, 0);
 	printf("\n");
 	return 0;
 }
 
 void inverter(char *frase, int n)
 {
 	if(frase[n] !='\0')
 	{
 		inverter(frase, n+1);
 		printf("%c", frase[n]);
    }
 }
