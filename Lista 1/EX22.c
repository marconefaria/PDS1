#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2, n, soma=0;

    printf("Digite o primeiro numero:\n");
    scanf("%i", &num1);

    printf("Digite o segundo numero:\n");
    scanf("%i", &num2);

    n = num1;

    while (n <= num2){
        if (n%2 != 0){
            soma = soma + n;
        }
        n++;
    }
    printf("A soma dos numeros impares no intervalo [%i ... %i] e: %i\n", num1, num2, soma);
}
