#include <stdio.h>
#include <stdlib.h>

int intervaloImpar(int numero){
    if (numero%2 != 0){
        return 0;
    } else{
        return 1;
    }
}

int main(){
    int numeroMax, intervalo, linha=0;

    printf("Digite um numero:\n");
    scanf("%d", &numeroMax);

    while (numeroMax > 0){
        linha++;
        if (linha%10 == 0){
            printf("\n");
        }
        intervalo = intervaloImpar(numeroMax);
        printf("%d = %d\t", numeroMax, intervalo);
        numeroMax--;
    }
    return 0;
}
