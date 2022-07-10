#include <stdio.h>
#include <stdlib.h>

#define linhasA 3
#define colunasA 3
#define linhasB 3
#define colunasB 3

int main(){
    int i, j, x, coluna=0;
    float aux, temp;
    float a[linhasA][colunasA];
    float b[linhasB][colunasB];
    float c[linhasA][colunasB];

    if(colunasA == linhasB){
         for(i=0; i < linhasA; i++) {
             for(j=0; j < colunasA; j++) {
                 printf("Digite o valor A[%d][%d] para a matriz A:\n", i+1, j+1);
                 scanf("%f", &aux);
                 a[i][j] = aux;
             }
        }

        for(i=0; i < linhasB; i++) {
             for(j=0; j < colunasB; j++) {
                 printf("Digite o valor B[%d][%d] para a matriz B:\n", i+1, j+1);
                 scanf("%f", &aux);
                 b[i][j] = aux;
             }
        }

        for(i=0; i<linhasA; i++){
             for(j=0; j<colunasB; j++){
                c[i][j]=0;
                    for(x=0; x<colunasA; x++){
                        temp += a[i][x]*b[x][j];
                     }
                     c[i][j] = temp;
                     temp=0;
             }
        }

        printf("\n\n");
        printf("A*B = \n");
        for(i=0; i<linhasA; i++){
            for(j=0; j<colunasB; j++){
                if(coluna == colunasB){
                    printf("\n");
                    coluna=0;
                }
                printf("%.2f\t", c[i][j]);
                coluna++;
             }
         }
    }
    else{
        printf("ERRO! NUMERO DE COLUNAS DE A DIFERENTE DO NUMERO DE LINHAS DE B!!!");
    }
}
