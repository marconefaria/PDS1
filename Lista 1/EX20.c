#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2, cont=0,resultado, mult;

    printf("Digite o primeiro numero \n");
    scanf("%i", &num1);

    printf("Digite o segundo numero \n");
    scanf("%i", &num2);

    if (num1 < num2){
        while (cont != num1){
            resultado = resultado + num2;
            cont ++;
        }
        printf("%i * %i = %i", num1, num2, resultado);
    } else {
        while (cont != num2){
            resultado = resultado + num1;
            cont ++;
        }
        printf("%i * %i = %i", num1, num2, resultado);
    }
}
