#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int difQuadradoSoma(int N){
    int quadSom=0, somQuad=0, cont=0, cont2=0;

    while(cont <= N){
        somQuad = somQuad + pow(cont,2);
        cont++;
    }

    while(cont2 <= N){
        quadSom = quadSom + cont2;
        cont2++;
    }

    quadSom = pow(quadSom,2);
    return (quadSom - somQuad);
}

int main(){
    int n, resultado;

    printf("Digite o parametro n:\n");
    scanf("%d", &n);

    resultado = difQuadradoSoma(n);
    printf("A diferenca entre o quadrado da soma e a soma dos quadrados do intervalo n e: %d", resultado);
}
