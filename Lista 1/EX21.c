#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, n, fatorial;

    printf("Digite um numero \n");
    scanf("%i", &num);
    n = num;

    if (num >= 0){
        for (fatorial = 1; n > 1; n = n - 1){
            fatorial = fatorial * n;
        }
        printf("%i! = %i", num, fatorial);
    }
    else {
        printf("O numero informado e menor que zero, portanto nao e possivel calcular seu fatorial!!!");
    }
}
/*Faça um programa que calcule o fatorial de um número. Se o número for menor do que zero, então o
algoritmo deverá informar ao usuário que o valor é inválido.*/
