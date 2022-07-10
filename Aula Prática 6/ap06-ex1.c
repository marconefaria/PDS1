#include <stdio.h>
#include <stdlib.h>

#define MAX_Linhas 12
#define MAX_Colunas 12

int main(){
    int lin=0, col=0, i, j;

    do{
        printf("Digite o numero de linhas da matriz:\n");
        scanf("%d", &lin);
        printf("Digite o numero de colunas da matriz:\n");
        scanf("%d", &col);
    }while((lin > MAX_Linhas) || (col > MAX_Colunas));

    int A[lin][col], B[lin][col], resultado[lin][col];

    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            A[i][j] = rand()%10;
            B[i][j] = rand()%10;
            printf("%d\t", B[i][j]);
        }
    }

    printf("\n");

    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            printf("%d\t", A[i][j]);
            resultado[i][j] = A[i][j] + B[i][j];
        }
    }


    printf("\n\nResultado:\n");

    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            printf("%d\t", resultado[i][j]);
        }
    }


}
