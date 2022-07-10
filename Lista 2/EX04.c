#include <stdio.h>
#include <stdlib.h>

#define I 12
#define J 4

int main(){
    int matriz[I][J], i, j, coluna=0, totalMes=0, cont=0, soma=0, linha=0, totalSemana=0;

    for(i=0; i<I; i++){
        for (j=0; j < J; j++){
            matriz[i][j] = rand()%10;
        }
    }

    for(i=0; i<I; i++){
        for (j=0; j<J; j++){

            if(coluna < J){
                totalMes = totalMes + matriz[i][j];
            }

            if(coluna == J){
                printf("\n");
                coluna=0;

                printf("Total vendido no mes %d: %d\n", i, totalMes);
                totalMes=0;
            }

            if(coluna==0){
                totalSemana = totalSemana + matriz[i][0];
            }

            soma = soma + matriz[i][j];
            printf("%d \t", matriz[i][j]);

            coluna++;
        }
    }
    printf("\n\nTotal vendido no ano:%d", soma);
    printf("\n\nTotal vendido nas primeiras semanas dos meses: %d\n", totalSemana);
}
