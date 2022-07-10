#include <stdio.h>
#include <stdlib.h>

int main(){
    int ano;

    printf("Digite um ano qualquer:\n");
    scanf("%i", &ano);

    if ((ano%100 > 0) && (ano%4 == 0) || (ano%400 == 0)){
        printf("O ano %i informado e bissexto!", ano);
    }
    else {
        printf("O ano %i informado nao e bissexto!", ano);
    }
}
