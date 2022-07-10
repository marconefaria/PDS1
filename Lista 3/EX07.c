#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int info;
    struct lista *prox;
}Lista;

Lista *raiz = NULL;

Lista* constroi(int n, int *v);

int main(){
    int n,*v,i;
    Lista *pnodo;

    printf("Digite a quantidade de elementos do vetor:\n");
    scanf("%d", &n);

    v = (int *) malloc(n * sizeof(int));
    for(i=0; i<n; i++){
        printf("Digite o %do elemento do vetor:\n", i+1);
        scanf("%d", &v[i]);
    }

    raiz = constroi(n, v);
    pnodo = raiz;

    while(pnodo != NULL){
        printf("%d\n", pnodo->info);
        pnodo = pnodo->prox;
    }
}

Lista* constroi(int n, int *v){
    int i;
    Lista *inicio;

    inicio = (Lista *)malloc(sizeof(Lista));

    if(n == 0){
        return raiz;
    }

    for(i=0; i<n; i++){
        inicio->info = v[i];
         printf("%d\n", inicio->info);
        inicio->prox = raiz;
    }
    return inicio;
}
