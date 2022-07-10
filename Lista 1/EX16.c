#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ano;

    printf("Insira um ano especifico: \n");
    scanf("%i", &ano);

    if ((ano%400 == 0)){
        printf("O ano e bissexto!!!");
    }
        else {
            if ((ano%4 == 0) && (ano%100 != 0)){
            printf("O ano e bissexto!!!");
            }
            else {
            printf("O ano nao e bissexto!!!");
            }
        }
}
