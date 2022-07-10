#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
    int vetorInt[N], i,j;

    for(i=0; i<N; i++){
        printf("Digite o valor da %da posicao:\n", i+1);
        scanf("%d", &vetorInt[i]);
    }
    for(j=0; j<N; j++){
        printf("valor da %da posicao: %d\n", j, vetorInt[j]);
    }
}
