#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int qtd=0, contador = 0, valores[10];
    float soma, media;

    printf("Digite a quantidade de numeros que voce deseja inserir: \n");
    scanf("%i", &qtd);

    while (contador < qtd){
        printf("Insira um numero: \n");
        scanf("%d", &valores[contador]);

        soma = soma + valores[contador];

        contador ++;
   }

   printf("A soma dos numeros digitados corresponde a: %.2f\n", soma);
   printf("A media simples dos numeros digitados corresponde a:%.2f\n", soma/qtd);
}
