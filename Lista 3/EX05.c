#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 2

typedef struct dados{
    char nome[40];
    unsigned int num;
}t_dados;

FILE *arq;

t_dados vetor[MAX];

int main(){
    int i, menu=0;

    printf("Escolha a opcao desejada:\n");
    printf("[1] - Inserir Registro, [2] - Salvar Registro, [3] - Carregar Registro, [4] - Listar Registro, [5] - Remover Registro\n");
    scanf("%d", &menu);

    switch(menu){
        case 1:
            inserir();
        break;
        case 2:
            salvar();
        break;
        case 3:
            carregar();
        break;
        case 4:
            listar();
        break;
        case 5:
            remover();
        break;
        default:
            printf("Opçao Invalida!!!\n");
    }
}

void inserir(){
    int i,n;

    do{
        printf("Quantos registros voce deseja inserir?\n");
        scanf("%d", &n);
    }while(n>MAX);

    for(i=0; i<n; i++){
	    printf("Digite o nome do %do registro:\n", i+1);
	    fflush(stdin);
	    fgets(vetor[i].nome, 40, stdin);

	    printf("Digite o numero do %do registro:\n", i+1);
	    scanf("%d", &vetor[i].num);

	    printf("Registro inserido com sucesso na posicao %d do vetor de cadastros!!!\n", i);
    }
    salvar();
}

void salvar(){
    int i;
    arq = fopen("file.bin","a+b");

    if(arq == NULL){
        printf("Erro ao criar o arquivo!!!");
    }

    for(i = 0; i < MAX; i++){
        fwrite(&vetor[i], sizeof(t_dados), 1, arq);
    }
    fclose(arq);
    printf("\n\nDados gravados com sucesso!!!");
}

void carregar(){
    arq = fopen("file.bin","r+b");

    if(arq == NULL){
        printf("Erro ao abrir o arquivo!!!");
    }

    for(k=0 ; k<MAX; k++){
        while((fread(&vetor[k], sizeof (t_dados), 1, arq)) == 1 ) {

        }
    }
    /*FALTAAAAA*/
}

void listar(){
    int k;

    arq = fopen("file.bin", "r+b");

    for(k=0 ; k<MAX; k++){
        while((fread(&vetor[k], sizeof (t_dados), 1, arq)) == 1 ) {
            if(vetor[k].num != 0){
                printf ( "Nome: %s", vetor[k].nome);
                printf ( "Idade: %d\n", vetor[k].num);
                printf ( "--------------------\n\n" );
            }
        }
    }
    fclose (arq);
}

void remover(){
    unsigned int ex;
    int i, posicao = 0;

    printf("Digite numero do registro a ser excluido:\n");
    scanf("%d", &ex);

    arq = fopen("file.bin","r+b");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo!!!");
    }

    for(i=0; i<MAX; i++){
        while (fread(&vetor[i], sizeof (t_dados), 1, arq ) == 1 ) {
            if(ex == (vetor[i].num)){
                strset(vetor[i].nome);
                vetor[i].num = 0;

                fseek (arq, posicao, SEEK_SET);

                fwrite(&vetor[i],sizeof(t_dados),1,arq);
                break;
            }
            posicao = ftell(arq);
        }
    }
    fclose (arq);
    printf("Dados Excluidos com sucesso!!!");
}
