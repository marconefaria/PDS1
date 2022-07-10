#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 7

int main(){
    float vetorFloat[N], valorPar=0;
    int i,j,k;

    for(i=0; i<N; i++){
        printf("Digite o valor da %da posicao:\n", i+1);
        scanf("%f", &vetorFloat[i]);
    }

    for(j=0; j<N; j++){
        printf("valor da %da posicao: %.2f\n", j+1, vetorFloat[j]);
    }

    for(k=0; k<N; k++){
        if(fmodf(vetorFloat[k],2) == 0){
            valorPar = vetorFloat[k];
            printf("Os valores pares do vetor sao: %.2f\n", valorPar);
        }
    }
}
