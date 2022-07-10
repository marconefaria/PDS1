#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float A,B,C,D;
    double M;

    printf("Digite o valor de A: \n");
    scanf("%f", &A);

    printf("Digite o valor de B: \n");
    scanf("%f", &B);

    printf("Digite o valor de C: \n");
    scanf("%f", &C);

    printf("Digite o valor de D: \n");
    scanf("%f", &D);

    M = (A + B + C + D)/4;
    printf("O valor da média simples desses numeros e: %.2lf\n", M);

}
