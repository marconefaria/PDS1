#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b;

    printf("Digite o valor de a:\n");
    scanf("%i", &a);

    printf("Digite o valor de b:\n");
    scanf("%i", &b);

    if (a != b){
        if (a > b){
            printf("a e maior que b!!!");
        }
        else {
            printf("a e menor que b!!!");
        }
    }
    else {
        printf("Os dois numeros digitados sao iguais!!! Digite numeros diferentes!!!");
    }
}
