#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor;

    printf("Insira um numero: \n");
    scanf("%i", &valor);

    if (valor%2 == 0){
        printf("O numero inserido e par!!!");
    }
    else {
        printf("O numero inserido e impar!!!");
    }
}
