#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 15

int numerosPares(int[]);
int somaImpar(int[]);
int valorMaximo(int[]);
int maiorValor(int[]);
int maiorDif(int[]);

int main(){
    int vetor[N], i,j;

    for(i=0; i < N; i++){
        vetor[i] = rand()%10;
    }

    for(j=0; j < N; j++){
        printf("%d\t", vetor[j]);
    }

    printf("\n\na)Quantidade de numeros pares: %d\n", numerosPares(vetor));
    printf("b)Soma dos numeros impares: %d\n", somaImpar(vetor));
    printf("c)Quantidade de numeros com valor maior que a media: %d\n", valorMaximo(vetor));
    printf("d)O maior valor do vetor: %d\n", maiorValor(vetor));
    printf("e)A maior diferenca em valor absoluto entre os elementos consecutivos do vetor: %d\n", maiorDif(vetor));
}

int numerosPares(int pares[]){
    int k, cont=0;

    for(k=0; k < N; k++){
        if(pares[k]%2 == 0){
            cont++;
        }
    }
    return cont;
}

int somaImpar(int impar[]){
    int k, soma=0;

    for(k=0; k < N; k++){
        if((impar[k])%2 != 0){
            soma = soma + impar[k];
        }
    }
    return soma;
}

int valorMaximo(int max[]){
    int k,j, cont=0;
    float media=0;

    for(k=0; k < N; k++){
        media = media + max[k];
    }

    media = media/N;

    for(j=0; j < N; j++){
        if(max[j] > media){
            cont++;
        }
    }

    return cont;
}

int maiorValor(int maior[]){
    int k, maiorValor=0;

    for(k=0; k < N; k++){
        if(maior[k] > maiorValor){
            maiorValor = maior[k];
        }
    }
    return maiorValor;
}
int maiorDif(int dif[]){
    int k, a=0, b=0, j=0, maiorDif=0, absoluto=0;

    for(k=0; k < N; k++){
        for(j=k+1; j<N; j++){
            absoluto = abs(dif[j] - dif[k]);

            if(maiorDif < absoluto){
                maiorDif = absoluto;
            }
        }
    }
    return maiorDif;
}
