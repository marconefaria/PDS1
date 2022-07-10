#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct agenda{
    char nome[50];
    char telefone[20];
    unsigned int idade;
}CONTATO;

struct agenda cadastro;
FILE *arq;

int main(){
    unsigned int menu;

    printf("BEM VINDO A SUA AGENDA DE CONTATOS EM C!!!\n\n");

    printf("Escolha a opcao desejada:\n");
    printf("[1] - Inserir Contatos, [2] - Alterar Contato, [3] - Excluir Contato, [4] - Exibir Contatos\n");
    scanf("%d", &menu);

    switch(menu){
        case 1:
            inserir();
        break;
        case 2:
            alterar();
        break;
        case 3:
            excluir();
        break;
        case 4:
            exibir();
        break;
        default:
            printf("Opçao Invalida!!!\n");
    }
}

void inserir(){
    int n;

    printf("Quantos contatos voce deseja incluir?\n");
    scanf("%d", &n);

    do{
        printf("Digite o nome:\n");
        fflush(stdin);
        fgets(cadastro.nome, 50, stdin);

        printf("Digite o telefone:\n");
        fflush(stdin);
        fgets(cadastro.telefone, 20, stdin);

        printf("Digite a idade:\n");
        scanf("%d", &cadastro.idade);

        arq = fopen("agenda.bin", "a+b");

        if(arq == NULL){
            printf("Erro ao abrir o arquivo!!!");
        }
        fseek(arq, 0, SEEK_END);

        fwrite (&cadastro, sizeof ( CONTATO ), 1, arq);
        n--;
    }while(n>0);

    fclose(arq);
    printf("Dados Inseridos com sucesso!!!");
}

void alterar(){
    char altera[50], copia[50];
    int posicao=0;

    printf("Digite o nome do contato a ser alterado:\n");
    fflush(stdin);
    fgets(altera, 50, stdin);

    printf("Digite a alteracao a ser realizada:\n");
    fflush(stdin);
    fgets(copia, 50, stdin);

    arq = fopen("agenda.bin","r+b");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo!!!");
    }

    while (fread(&cadastro, sizeof (CONTATO), 1, arq ) == 1 ) {
        if(strcmp(altera, cadastro.nome) == 0 ){
            strcpy(cadastro.nome, copia);

            fseek (arq, posicao, SEEK_SET);

            fwrite(&cadastro,sizeof(CONTATO),1,arq);
            break;
        }
        posicao = ftell(arq);
    }
    fclose (arq);
    printf("Dados Alterados com sucesso!!!");
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

    while (fread(&cadastro, sizeof (CONTATO), 1, arq ) == 1 ) {
        if(strcmp(exclui, cadastro.nome) == 0 ){
            strset(cadastro.nome);
            strset(cadastro.telefone);
            cadastro.idade = 0;

            fseek (arq, posicao, SEEK_SET);

            fwrite(&cadastro,sizeof(CONTATO),1,arq);
            break;
        }
        posicao = ftell(arq);
    }
    fclose (arq);
    printf("Dados Excluidos com sucesso!!!");
}

void exibir(struct agenda cadastro){
    arq = fopen("agenda.bin", "rb");

    while((fread(&cadastro, sizeof (CONTATO), 1, arq)) == 1 ) {
        printf ( "Nome: %s\n", cadastro.nome);
        printf ( "Telefone: %s\n", cadastro.telefone);
        printf ( "Idade: %d\n", cadastro.idade);
        printf ( "--------------------\n\n" );
    }
    fclose (arq);
}
