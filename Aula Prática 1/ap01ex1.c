#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265
/*Autor: Marcone Faria 2019021573*/
int main()
{
    double graus, resultado;

    graus = 45.0;
    resultado = sin (graus*(PI / 180));

    printf("O valor do seno escolhido corresponde a = %f", resultado);
    printf("\n");
}
