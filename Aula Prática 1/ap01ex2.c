#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Autor: Marcone Faria 2019021573*/
int main(int argc, char *argv[])
{
    float d;
    d = 500;

    /*admitindo que a fórmula de juros compostos corresponde a M=C(1+i)^t, temos:*/
    d = d * pow((1+0.01),3);

    printf("Valor da conta = %.2f\n", d);
    system("pause");
    return 0;
}

