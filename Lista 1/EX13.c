#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor;

    printf("Insira um numero: \n");
    scanf("%i", &valor);

    if ((valor == 1) || (valor == 5) || (valor == 10)){
        return 0;
    }
    else {
        printf("Valor Inserido Invalido!!! Tente Novamente");
    }
}
