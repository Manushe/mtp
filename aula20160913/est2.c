
#include <stdio.h>
#include<math.h>
#define RECEBEPONTO(c, ponto) \
    ({printf("Entre com a coordenada x de %c: ", c); \
        scanf("%f", &ponto.x);\
        printf("Coordenada y de %c= ", c);\
        scanf("%f", &ponto.y); \
        printf("Coordenada z de %c= ", c);\
        scanf("%f", &ponto.z);})
#define MOSTRAPONTO(ponto) \
({ printf("(%g;%g;%g)\n", ponto.x, ponto.y, ponto.z);})

#define SOMA(soma,ptA,ptB) \
({ soma.x= ptA.x+ptB.x; \
    soma.y= ptA.y+ptB.y;\
    soma.z=ptA.z+ptB.z; })

#define DISTANCIA(ptA, ptB, d) \
({d=sqrt(pow(ptA.x-ptB.x,2.f)+ \
         pow(ptA.y-ptB.y,2.f)+\
         pow(ptA.z-ptB.z,2.f));})
struct ponto{
        float x;
        float y;
        float z;
        };
int main()
{
   struct ponto A,B,S;
   float distancia;
   RECEBEPONTO('A',A);
   RECEBEPONTO('B',B);
   SOMA(S,A,B);
   MOSTRAPONTO(S);
   DISTANCIA(A, B, distancia);
   printf("\nDistancia= %g.",distancia);
    return 0;
}

