#include <stdio.h>
int main(){
float A,B,C,medianotas;
printf("Digite as notas aluno \nNota A: ");
scanf("%f",&A);
printf("Nota B: ");
scanf("%f",&B);
printf("Nota C: ");
scanf("%f", &C);
medianotas= (A*2+B*3+C*5)/10;
printf("A media final desse aluno eh: %f", medianotas);
return 0;}
