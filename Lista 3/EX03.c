#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 90

char nome[50];
char telefone[20];
unsigned int idade;
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
        fgets(nome, 50, stdin);

        printf("Digite o telefone:\n");
        fgets(telefone, 20, stdin);

        printf("Digite a idade:\n");
        scanf("%d", &idade);

        arq = fopen("agenda.bin", "a+b");

        if(arq == NULL){
            printf("Erro ao abrir o arquivo!!!");
        }

        fwrite(&nome[50], sizeof(char), strlen(nome), arq);
        fwrite(",", sizeof(char), 1, arq);
        fwrite(&telefone[20], sizeof(char), strlen(telefone), arq);
        fwrite(",", sizeof(char), 1, arq);
        fwrite(&idade, sizeof(int), 1, arq);
        fclose(arq);
        n--;
    }while(n>0);
}

void alterar(){
    char altera[50], copia[50], buf[MAX];
    int cont=0;
    long int posicao=0;

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

    fgets(buf,MAX,arq);
    while (!feof(arq)){
        if(strcmp(altera,(strtok(buf,","))) == 0){
            strcpy(altera, copia);
            fseek (arq, posicao, SEEK_SET);

            fwrite(&altera[50],sizeof(char),strlen(altera),arq);
            break;
        }
        posicao = ftell(arq);
    }
    printf("Alteracao realizada com sucesso!!!");
    fclose(arq);
}

void excluir(){
    char del[50], buf[MAX];
    long int posicao=0;

    printf("Digite o nome do contato a ser excluido:\n");
    fflush(stdin);
    fgets(del, 50, stdin);

    arq = fopen("agenda.txt","r+");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo!!!");
    }

    fgets(buf,MAX,arq);
    while (!feof(arq)){
        if(strcmp(del,(strtok(buf,","))) == 0){
            strcpy(del, NULL);
            strcpy(telefone, NULL);
            idade = NULL;

            fseek (arq, posicao, SEEK_SET);

            fwrite(&del[50],sizeof(char),strlen(del),arq);
            fwrite(&telefone[20],sizeof(char),strlen(telefone),arq);
            fwrite(&idade,sizeof(int),1,arq);
            break;
        }
        posicao = ftell(arq);
    }
    printf("Alteracao realizada com sucesso!!!");
    fclose(arq);
}

void exibir(){
    char *name, *tel, buf[MAX];
    int old;

    fseek(arq, 0, SEEK_SET);
    arq = fopen("agenda.bin", "rb");

    fgets(buf,MAX,arq);
    while (!feof(arq)){
        name = atoi(strtok(buf,","));
        tel = strtok(NULL,",");
        old = (strtok(NULL,","));
        printf("Nome: %s\nTelefone: %s\nIdade: %d\n",name, tel, old);
        fgets(buf,MAX,arq);
    }
    fclose(arq);
}

