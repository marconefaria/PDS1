#include <stdio.h>
#include <stdlib.h>

#define I 8
#define J 12

int main(){
    int aux=0, linha=0, i, j, matriz[I][J], mes=0, ano=0;
    float consumoMedio=0, vconsumoMedio[J], consumoAno=0, vconsumoAno[I], maiorAno=0, maiorMes=0;

    for(i=0; i<I; i++){
        for (j=0; j<J; j++){
            matriz[i][j] = rand()%10;
        }
    }

    for (j=0; j<J; j++){
        for(i=0; i<I; i++){
            consumoMedio = consumoMedio + matriz[i][j];
            if(aux == J){
                printf("\n");
                aux = 0;
            }
            printf("%d\t", matriz[i][j]);
            aux++;
        }
        vconsumoMedio[j] = (consumoMedio/I);
        consumoMedio = 0;
    }

    for (i=0; i<I; i++){
        for(j=0; j<J; j++){
            consumoAno = consumoAno + matriz[i][j];
        }
        vconsumoAno[i] = (consumoAno/J);
        consumoAno = 0;
    }

    printf("\n\n");
    for(j=0; j<J; j++){
        if(vconsumoMedio[j] > maiorMes){
            maiorMes = vconsumoMedio[j];
            mes = j;
        }
        printf("Consumo medio do mes %d: %.2f\n", j+1 ,vconsumoMedio[j]);
    }

    printf("\n\n");
    for(i=0; i<I; i++){
        if(vconsumoAno[i] > maiorAno){
            maiorAno = vconsumoAno[i];
            ano = i;
        }
        printf("Consumo medio do ano %d: %.2f\n", i+1 ,vconsumoAno[i]);
    }

    if(maiorAno > maiorMes){
        printf("\nAno com maior gasto de energia (comparado ao consumo por mes e ano): %d", ano);
    }else{
        if(maiorAno == maiorMes){
            printf("\nAno/Mes com maior gasto de energia (comparado ao consumo por mes e ano): %d", ano);
        }else{
            printf("\nMes com maior gasto de energia (comparado ao consumo por mes e ano): %d", mes);
        }
    }
}
