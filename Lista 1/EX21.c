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
/*Fa�a um programa que calcule o fatorial de um n�mero. Se o n�mero for menor do que zero, ent�o o
algoritmo dever� informar ao usu�rio que o valor � inv�lido.*/
