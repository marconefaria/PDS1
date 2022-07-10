#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

int main(){
    float vetorValores[MAX];
    int N=0, i=0, j=0,pos=0;

    do{
        printf("Digite qual o numero de posicoes devem ser alocadas:\n");
        scanf("%d", &N);
    }while(N > MAX);

    for(i=0; i<N; i++){
        printf("Digite o valor da %da posicao:\n", i+1);
        scanf("%f", &vetorValores[i]);
    }
    for(j=(N-1); j>=0; j--){
            printf("valor da %da posicao: %.2f\n", j+1, vetorValores[j]);
    }
}

