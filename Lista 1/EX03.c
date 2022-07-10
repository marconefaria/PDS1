#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float A,B,T;

    printf("Digite o valor de A: \n");
    scanf("%f", &A);

    printf("Digite o valor de B: \n");
    scanf("%f", &B);

    T = A;
    A = B;
    B = T;

    printf("A <- B %.3f\n", A);
    printf("B <- A %.3f\n", B);
}

