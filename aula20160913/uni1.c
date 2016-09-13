
#include<stdio.h>
#include<string.h>
typedef enum {INTEGER=1, STRING=2, FLOAT=3} Type;
typedef struct{
    Type tipo;
    union {
    int i;
    char s[256];
    float f;
 }dado;
}Desconhecido;
