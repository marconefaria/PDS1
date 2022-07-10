#include <stdio.h>
#include <stdlib.h>

#define M 2
#define N 3

int main(){
    int i, j, matriz[M][N], coluna=0, v1[N], v2[N], maiorValor=0, menorValor=0;
    int vmaiorValor[N], vmenorValor[N];

    for(i=0; i<M; i++){
        for (j=0; j<N; j++){
            matriz[i][j] = rand()%10;
        }
    }

    for(j=0; j<N; j++){
        for (i=0; i<M; i++){
            maiorValor = matriz[0][0];
            menorValor = matriz[0][0];

            if(coluna == N){
                printf("\n");
                coluna=0;
            }
            printf("%d \t", matriz[i][j]);
            coluna++;

            if(matriz[i][j] > maiorValor){
                maiorValor = matriz[i][j];
            }
            if(matriz[i][j] < menorValor){
                menorValor = matriz[i][j];
            }
        }
        vmaiorValor[j] = maiorValor;
        vmenorValor[j] = menorValor;
    }
    printf("\n\nMenores Valores:\n");
    for(j=0; j<N; j++){
        printf("%d\t", vmenorValor[j]);
    }

    printf("\nMaiores Valores:\n");
    for(j=0; j<N; j++){
        printf("%d\t", vmaiorValor[j]);
    }
}
