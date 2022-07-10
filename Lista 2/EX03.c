#include <stdio.h>
#include <stdlib.h>

#define N 4

int elementosPares(int[][N]);

int somaImpares(int[][N]);

int maiorQMedia(int[][N]);

int maiorValor(int[][N]);

int segmaiorValor(int[][N]);

int eliminaRep(int[][N]);

int main(){
    int matriz[N][N], i, j, menu, linha=0;

    for(i=0; i < N; i++){
        for (j=0; j < N; j++){
            matriz[i][j] = rand()%10;
        }
    }

    for(i=0; i < N; i++){
        for (j=0; j < N; j++){
            if(linha == N){
                printf("\n");
                linha=0;
            }
            printf("%d \t", matriz[i][j]);
            linha++;
        }
    }

    printf("\n\nInsira a opcao desejada de 1 a 7:\n");
    scanf("%d", &menu);

    switch(menu){
        case 1:
            printf("\n\n1. a quantidade de numeros pares da matriz: %d", elementosPares(matriz));
        break;
        case 2:
            printf("\n2. a soma dos numeros impares da matriz: %d", somaImpares(matriz));
        break;
        case 3:
            printf("\n3. a quantidade de números com valor maior do que a media: %d", maiorQMedia(matriz));
        break;
        case 4:
            printf("\n4. o maior valor da matriz: %d", maiorValor(matriz));
        break;
        case 5:
            printf("\n5. o segundo maior valor da matriz: %d", segmaiorValor(matriz));
        break;
        case 6:
            printf("\n6. eliminar os numeros repetidos da matriz: %d", eliminaRep(matriz));
        break;
        case 7:
            system("pause");
        break;
        default:
            printf("OPCAO INVALIDA!!!");
        break;
    }
}

int elementosPares(int matriz[][N]){
    int k,z,cont=0;

    for(k=0; k < N; k++){
        for (z=0; z < N; z++){
            if(matriz[k][z]%2 == 0){
                cont++;
            }
        }
    }
    return cont;
}

int somaImpares(int matriz[][N]){
    int k,z,soma=0;

    for(k=0; k < N; k++){
        for (z=0; z < N; z++){
            if(matriz[k][z]%2 != 0){
                soma = soma + matriz[k][z];
            }
        }
    }
    return soma;
}

int maiorQMedia(int matriz[][N]){
    int k,z,media=0, soma=0, maior=0, cont=0;

    for(k=0; k < N; k++){
        for (z=0; z < N; z++){
            soma = soma + matriz[k][z];
        }
    }

    media = soma/(N*N);

    for(k=0; k < N; k++){
        for (z=0; z < N; z++){
            if(matriz[k][z] > media){
                cont++;
            }
        }
    }
    return cont;
}

int maiorValor(int matriz[][N]){
    int k,z,maiorValor=0;

    for(k=0; k < N; k++){
        for (z=0; z < N; z++){
            if(matriz[k][z] > maiorValor){
                maiorValor = matriz[k][z];
            }
        }
    }
    return maiorValor;
}

int segmaiorValor(int matriz[][N]){
    int k,z,maiorValor=0, segmaiorValor=0;

    for(k=0; k < N; k++){
        for (z=0; z < N; z++){
            if(matriz[k][z] > maiorValor){
                maiorValor = matriz[k][z];
            }
            if((matriz[k][z] != maiorValor) && (matriz[k][z] >segmaiorValor)){
                segmaiorValor = matriz[k][z];
            }
        }
    }
    return segmaiorValor;
}

int eliminaRep(int matriz[][N]){
    int i, j, k, z, n=0, repete=0, copia[N][N],x=0, linha=0;

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            copia[i][j] = matriz[i][j];
            if(linha == N){
                printf("\n");
                linha=0;
            }
            printf("%d\t", copia[i][j]);
            linha++;
        }
    }

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            for(k=i+1; k<N; k++){
                for(z=j+1; z<N; z++){
                    if(matriz[i][j] == matriz[k][z]){
                        copia[i][j] = 0;
                    }
                }
            }
        }
    }

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if(linha == N){
                printf("\n");
                linha=0;
            }
            printf("%d\t", copia[i][j]);
        linha++;
        }
    }
}
