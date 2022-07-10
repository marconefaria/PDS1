#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor,P1, P2, P3, P4;

    printf("Digite um valor de ate 4 digitos: \n");
    scanf("%4d", &valor);

    P4 = valor%10000;
    P3 = valor%1000;
    P2 = valor%100;
    P1 = valor%10;

    printf("Valor Invertido: %d", P1);
    printf("%d", P2/10);
    printf("%d", P3/100);
    printf("%d", P4/1000);
}
