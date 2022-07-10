#include <stdio.h>
#include <stdlib.h>

#define I_1 12
#define J_1 2

#define I_2 2
#define J_2 2

int main(){
    int i, j, aux=0, matriz_1[I_1][J_1], matriz_2[I_2][J_2], linha=0, lucro_M1=0, lucro_M2=0, tot_1=0, tot_2=0;

    for(i=0; i<I_1; i++){
        for (j=0; j < J_1; j++){
            matriz_1[i][j] = rand()%10;
        }
    }

    for(i=0; i<I_2; i++){
        for (j=0; j < J_2; j++){
            matriz_2[i][j] = rand()%10;
        }
    }
    printf("TABELA 1:\n");
    for(i=0; i<I_1; i++){
        for (j=0; j<J_1; j++){
            if(i <= I_1){
                if(j==0){
                    lucro_M1 = ((matriz_1[i][0])*(matriz_2[0][1]));
                    tot_1 += lucro_M1;
                    /*printf("Lucro M1 = %d\n", lucro_M1);*/
                }
                if(j==1){
                    lucro_M2 = ((matriz_1[i][1])*(matriz_2[1][1]));
                    tot_2 += lucro_M2;
                    /*printf("Lucro M2 = %d\n", lucro_M2);*/
                }
            }

            if(aux == J_1){
                printf("\n");
                aux=0;
            }

            printf("%d \t", matriz_1[i][j]);
            aux++;

        }
        printf("Lucro no mes %d = %d", i+1, (lucro_M1+lucro_M2));
    }
    printf("\n\nLucro anual total: %d", (tot_1+tot_2));

    printf("\n\n");
    printf("TABELA 2:");
    for(i=0; i<I_2; i++){
        for (j=0; j<J_2; j++){
            if(aux == J_2){
                printf("\n");
                aux=0;
            }
            printf("%d \t", matriz_2[i][j]);
            aux++;

        }
    }
}
