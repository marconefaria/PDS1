#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 50
struct endereco {
    char rua[LEN];
    char Cidade[15];
    char Estado[3];
    char CEP[10];
};

struct endereco obtem_endereco(void){
struct endereco ender;
    printf("\t Digite o nome da rua: ");
    fflush(stdin);
    fgets(ender.rua, LEN, stdin);

    printf("\t Digite o nome da sua cidade: ");
    fflush(stdin);
    fgets(ender.Cidade, 15, stdin);

    printf("\t Digite a sigla do seu estado: ");
    fflush(stdin);
    fgets(ender.Estado, 3, stdin);

    printf("\t Digite o seu CEP: ");
    fflush(stdin);
    fgets(ender.CEP, 10, stdin);

    return ender;
}

void imprime_endereco(struct endereco ender){
    printf("\t %s\n", ender.rua);
    printf("%s/%s/%s", ender.CEP,ender.Cidade, ender.Estado);
}

void main(void){
struct endereco residencia;
    printf("Entre seu endereco residencial:\n");
    residencia = obtem_endereco();
    printf("\nSeu endereco e:\n");
    imprime_endereco(residencia);
}
