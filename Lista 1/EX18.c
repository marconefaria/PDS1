#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador = 0, valores[10];
    float soma, media;

    while (contador < 10){
        printf("Insira um numero: \n");
        scanf("%d", &valores[contador]);

        soma = soma + valores[contador];

        contador ++;
   }

   media = soma/10;
   printf("A soma dos numeros digitados corresponde a: %.2f\n", soma);
   printf("A media simples dos numeros digitados corresponde a:%.2f\n", media);
}
