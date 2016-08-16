#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int i;
	if(argc == 1)
		printf("Bom dia, tava td meio medio, agr ta mt meio merda!!!");
	else{
	if(argc == 2)
		printf("Bom dia so que nao, %s!!\n", argv[1]);
		else
		for(i=0; i<atoi(argv[1]); i++)
			printf("Bom dia so que nao, %s!!\n", argv[2]);
}
	return 0;
}