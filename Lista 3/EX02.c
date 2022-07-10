#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5

int main(){
    int mat1[N][N], mat2[N][N], soma[N][N];
    int result, i,j,k, cont=0;
    FILE *arq;

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            mat1[i][j] = rand()%10;
            mat2[i][j] = rand()%10;
        }
    }
    printf("\nMatriz 1:\n");
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 2:\n");
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    arq = fopen("arquivo.bin","wb");

    if(arq == NULL){
        printf("Erro ao abrir o arquivo!!!");
    }

    for (i=0; i<N; i++){
		for (j=0; j<N; j++){
			fwrite(&mat1[i][j], sizeof(int), 1, arq);
		}
    }

	 for (i=0; i<N; i++){
		for (j=0; j<N; j++){
			fwrite(&mat2[i][j], sizeof(int), 1, arq);
		}
    }
    fclose(arq);

    arq = fopen("arquivo.bin" , "rb" );

	if (arq == NULL) {
		printf("Erro ao ler o arquivo");
	}

	for (i=0; i<N; i++){
		for (j=0; j<N; j++){
			soma[i][j] = mat1[i][j] + mat2[i][j];
		}
	}

	printf("\nSoma das matrizes:\n");

	for (i=0; i<N; i++){
		for (j=0; j<N; j++){
			printf("%d\t", soma[i][j]);
		}
		printf("\n");
	}

	fclose(arq);

	return 0;

}
