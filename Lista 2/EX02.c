#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(){
    int matriz1[N][N], matriz2[N][N], soma[N][N], i, j, linha=0;

    printf("Preencha a matriz 1:\n");
    for(i=0; i < N; i++){
        for (j=0; j < N; j++){
            printf("Digite um valor para a %da linha e para a %da coluna:\n", i+1, j+1);
            scanf ("%d", &matriz1[i][j]);
        }
    }

    printf("\n\nPreencha a matriz 2:\n");
    for(i=0; i < N; i++){
        for (j=0; j < N; j++){
            printf("Digite um valor para a %da linha e para a %da coluna:\n", i+1, j+1);
            scanf ("%d", &matriz2[i][j]);
        }
    }

    for(i=0; i < N; i++){
        for (j=0; j < N; j++){
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("\n\nSOMA DAS MATRIZES 1 E 2:\n");
    for(i=0; i < N; i++){
        for (j=0; j < N; j++){
            if(linha == N){
                printf("\n");
                linha=0;
            }
            printf("%d \t", soma[i][j]);
            linha++;
        }
    }
}
