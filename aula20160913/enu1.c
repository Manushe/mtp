#include<stdio.h>
#define MOSTRABOOL(x) ({printf("%s\n",(x)? "Verdadeiro":"Falso");})
typedef enum { false = 0, true = 1} bool;
int main()
{
    bool V= true;
    bool F= false;
    MOSTRABOOL(V);
    MOSTRABOOL(F);
    MOSTRABOOL(2>3);
    MOSTRABOOL(2<3);
    MOSTRABOOL(2==3);
    MOSTRABOOL(2!=3);
    return 0;

}
