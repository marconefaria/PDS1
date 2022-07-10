#include <stdio.h>
#include <stdlib.h>
#define N 15

int terceiroMaior(int[]);
void ordenarVetor(int[]);
int elementosRepetidos(int[]);

int main(){
    int vetor[N], i,j;

    for(i=0; i < N; i++){
        vetor[i] = rand()%10;
    }

    for(j=0; j < N; j++){
        printf("%d\t", vetor[j]);
    }

    printf("\na)Exibir o 3o. maior elemento do vetor: %d\n", terceiroMaior(vetor));
    printf("b)Ordenar o vetor:\n");
    ordenarVetor(vetor);
    printf("\nc)Eliminar Repetidos:\n");
    printf("%d\t", elementosRepetidos(vetor));
}

int terceiroMaior(int terceiro[]){
    int k, maiorValor=0, segundoMaior=0, terceiroMaior=0;

    for(k=0; k < N; k++){
        if(terceiro[k] > maiorValor){
            maiorValor = terceiro[k];
        }

        if((terceiro[k] != maiorValor) && (terceiro[k] > segundoMaior)){
            segundoMaior = terceiro[k];
        }

        if((terceiro[k] != maiorValor) && (terceiro[k] != segundoMaior) && (terceiro[k] > terceiroMaior)){
            terceiroMaior = terceiro[k];
        }
    }
    return terceiroMaior;
}

void ordenarVetor(int ordem[]){
    int i, j, aux=0;

    for(i=0; i<N; i++){
        for(j=i+1; j<N; j++){
            if(ordem[i] > ordem[j]){
                aux = ordem[i];
                ordem[i] = ordem[j];
                ordem[j] = aux;
            }
        }
    }

    for(i=0; i<N; i++){
        printf("%d\t", ordem[i]);
    }
}

int elementosRepetidos(int vetor[]){
    int i, j, n=0, repete=0, copia[N],x=0;

    for(i=0; i<N; i++){
        copia[i] = vetor[i];
        printf("%d\t", copia[i]);
    }

    for(i=0; i<N; i++){
        for(j=i+1; j<N; j++){
            if(vetor[i] == vetor[j]){
                copia[i] = 0;
            }
        }
    }

    for(i=0; i<N; i++){
        printf("%d\t", copia[i]);
    }
}
