#include<stdio.h>
#include<math.h>
#define Y 0.299*r+0.587*g+0.114*b
#define Pb -0.168736*r-0.331264*g+0.5*b
#define Pr 0.5*r-0.418688*g-0.081312*b

int main()
{
float r, g ,b;
double y, pb, pr;
printf("Informe o valor da componente R' do sistema RGB: ");
scanf("%d", &r);
printf("\nComponente G': ");
scanf("%d",&g);
printf("\nComponente B': ");
scanf("%d",&b);
y= Y;
double round (double y);
pb= Pb;
double round (double pd);
pr=Pr;
double round (double pr);
printf("\nEssas componentes no sistema Y'CbRb sao: %d; %d; %d.", y, pb, pr);
return 0;
}
