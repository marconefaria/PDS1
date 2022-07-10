#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor;

    printf("Insira um numero: \n");
    scanf("%i", &valor);

    if (valor > 0){
        printf("O numero inserido e positivo!!!");
    }
    if (valor < 0){
        printf("O numero inserido e negativo!!!");
    }
    
    if (valor == 0){
        printf("O numero inserido e igual a zero!!!");
    }
}
