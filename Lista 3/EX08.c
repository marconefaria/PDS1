#include <stdio.h>
#include <stdlib.h>

typedef struct agenda{
    char nome[50];
    char telefone[20];
    struct agenda *prox;
} Agenda;

Agenda *contato;
FILE *arq;

int main(){
    unsigned int menu;

    printf("BEM VINDO A SUA AGENDA DE CONTATOS EM C!!!\n\n");

    printf("Escolha a opcao desejada:\n");
    printf("[1] - Inserir Contatos, [2] - Excluir Contato, [3] - Buscar Contato\n");
    scanf("%d", &menu);

    switch(menu){
        case 1:
            inserir();
        break;
        case 2:
            excluir();
        break;
        case 3:
            buscar(contato);
        break;
        default:
            printf("Opçao Invalida!!!\n");
    }
}

void inserir(){
    int n;

    contato = (Agenda *) malloc(sizeof(Agenda));

    printf("Quantos contatos voce deseja incluir?\n");
    scanf("%d", &n);

    do{
        printf("Digite o nome:\n");
        fflush(stdin);
        fgets(contato->nome, 50, stdin);

        printf("Digite o telefone:\n");
        fflush(stdin);
        fgets(contato->telefone, 20, stdin);

        contato->prox = contato;

        arq = fopen("agenda.bin", "a+b");

        if(arq == NULL){
            printf("Erro ao abrir o arquivo!!!");
        }
        fseek(arq, 0, SEEK_END);

        fwrite (&contato, sizeof ( Agenda ), 1, arq);
        n--;
    }while(n>0);

    fclose(arq);
    printf("Dados Inseridos com sucesso!!!");
}


void excluir(){
    char exclui[50];
    int posicao=0, i;

    printf("Digite o nome do contato a ser excluido:\n");
    fflush(stdin);
    fgets(exclui, 50, stdin);

    arq = fopen("agenda.bin","r+b");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo!!!");
    }

    while (fread(&contato, sizeof (Agenda), 1, arq ) == 1 ) {
        if(strcmp(exclui, contato->nome) == 0 ){
            strset(contato->nome);
            strset(contato->telefone);
            contato->prox = contato;

            fseek (arq, posicao, SEEK_SET);

            fwrite(&contato,sizeof(Agenda),1,arq);
            break;
        }
        posicao = ftell(arq);
    }
    fclose (arq);
    printf("Dados Excluidos com sucesso!!!");
}

void buscar(Agenda *cadastro){
    char busca[50];
    int i, posicao = 0;

    printf("Digite o contato a ser buscado\n");
    fflush(stdin);
    fgets(busca, 50, stdin);

    arq = fopen("file.bin","r+b");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo!!!");
    }

    while (fread(&cadastro, sizeof (Agenda), 1, arq ) == 1 ) {
        if(strcmp(busca, cadastro->nome) == 0){
            printf ( "Nome: %s", cadastro->nome);
            printf ( "Telfone: %s\n", cadastro->telefone);
            printf ( "--------------------\n\n" );
            fseek (arq, posicao, SEEK_SET);

        }
        posicao = ftell(arq);
    }
    fclose (arq);
}
