#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Autor: Marcone Faria 2019021573*/
int main(){
    int x = 2;
    short int y = 2;
    unsigned char a = 2;

    x = pow(x, 31) - 1;
    y = pow(y, 15) - 1;
    a = pow (a, 8) - 1;

    printf("Valor do inteiro x = %d\n", x);
    printf("Valor do inteiro curto y = %d\n", y);
    printf("Valor do caracter sem sinal z = %d\n", a);

    printf("Valor do inteiro x mais 1 = %d\n", x + 1);
    /* ao somar o número 1 à x, o número se torna negativo*/
    printf("Valor do inteiro curto y mais 1 = %d\n", y + 1);
    printf("Valor do caracter sem sinal z mais 1 = %d\n", a + 1);
}
/*Valor do inteiro x = 2147483647*/
