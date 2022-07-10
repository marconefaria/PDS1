#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;

    printf("Digite o valor de a:\n");
    scanf("%i", &a);

    printf("Digite o valor de b:\n");
    scanf("%i", &b);

    printf("Digite o valor de c:\n");
    scanf("%i", &c);

    if ((a==b) && (c==b)){
        printf("Todos os numeros sao iguais!!!\n");
    }
        else {
            if (((a==b) && (c!=b))||((a!=b) && (c==b)) || ((a==c) && (c!=b))){
                printf("Dois dos numeros inseridos sao iguais!!!\n");
            }
            else {
                printf("Nao ha numeros iguais!!!");
        }
        }
}
