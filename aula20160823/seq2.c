#include <stdio.h>
int main(){
float base, altura, areatriangulo;
printf("Meu benzinho, informe a base do triangulo: ");
scanf("%f",&base);
printf("Agora, a altura do triangulo: ");
scanf("%f", &altura);
fflush(stdin);
areatriangulo=(base*altura)/2;
printf("A area do triangulo e:%f, \n    BEIJUX",areatriangulo);

return 0;}
