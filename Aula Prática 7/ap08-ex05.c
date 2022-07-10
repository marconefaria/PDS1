#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct pessoa{
    char nome[50];
    int idade;
    float peso;
    float altura;

} individuo;

int main(){
    int n,i;
    individuo vetorCadastro[MAX];

    do{
        printf("Digite o numero de pacientes a serem cadastrados:\n");
        scanf("%d", &n);
    }while(n > MAX);

    for(i=0; i<n; i++){
        printf("Digite o nome do %do paciente:\n", i+1);
        fflush(stdin);
        fgets(vetorCadastro[i].nome, 50, stdin);

        printf("Digite a idade do %do paciente:\n", i+1);
        scanf("%d", &vetorCadastro[i].idade);

        printf("Digite o peso do %do paciente:\n", i+1);
        scanf("%f", &vetorCadastro[i].peso);

        printf("Digite a altura do %do paciente:\n", i+1);
        scanf("%f", &vetorCadastro[i].altura);

    }

    for(i=0; i<n; i++){
        printf("Nome: %s\n", vetorCadastro[i].nome);
        printf("Idade: %d\n", vetorCadastro[i].idade);
        printf("Peso: %.2f\n",	vetorCadastro[i].peso);
        printf("Altura: %.2f\n",	vetorCadastro[i].altura);
        printf("\n\n\n");
    }
}
