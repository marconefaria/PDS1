#include <stdio.h>
#include <stdlib.h>

#define N 3

void vetormatriz(int v[] , int A[][N]);

int main(){
    int i;
    int vetor[N*N], matriz[N][N];

    for(i=0; i<(N*N); i++){
        vetor[i] = rand()%10;
        printf("%d\t", vetor[i]);
    }
    printf("\n\n");
    vetormatriz(vetor, matriz);
}

void vetormatriz(int v[] , int A[][N]){
    int i,j, z, coluna=0, impressao=0, cont=0;

        for(j=0; j<N; j++){
            for(z=0; z<(N*N); z++){
                A[cont][j++] = v[z];
                if(z>3){

                }
                if(coluna == N){
                    cont++;
                    coluna=0;
                }
                coluna++;
            }
        }

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if(impressao == N){
                printf("\n");
                impressao=0;
            }
            printf("%d\t", A[i][j]);
        impressao++;
        }
    }

}
/*ERRADO*/
/*if(linha == N){
                    A[i][j] = v[z];
                }else{
                    if(linha == N-1){
                        A[i][j] = v[z];
                    }else{
                        if(linha == N-2){
                            A[i][j] = v[z];
                        }
                    }
                }
                --linha;*/
/*for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            for(z=0; z<(N*N); z++){
                aux = v[z];
            }
            A[i][j] = aux;
            aux=0;
                /*if(coluna == N){
                    i++;
                    coluna=0;
                }
                coluna++;
        }
    }*/
