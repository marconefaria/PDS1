#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int info;
    struct lista *prox;
}Lista;

Lista *raiz = NULL;
int quebra;

Lista* constroi(int n, int *v);
Lista* separa (Lista* l, int n);

int main(){
    int n,*v,i, quebra;
    Lista *pnodo;

    printf("Digite a quantidade de elementos da lista encadeada:\n");
    scanf("%d", &n);

    v = (int *) malloc(n * sizeof(int));
    for(i=0; i<n; i++){
        v[i] = rand()%10;
    }

    raiz = constroi(n, v);

    printf("\n\n\nDigite um elemento da lista para separa-la:\n");
    scanf("%d", &quebra);

    separa(raiz, quebra);
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
        printf("%d\t", inicio->info);
        inicio->prox = raiz;
    }
    return inicio;
}

Lista* separa (Lista* l, int n){
    Lista *aux = l;

	while(aux->prox != NULL) {
        aux = aux->prox;
        printf("%d\t", aux->info);

		if(aux->info == n){
			break;
		}
	}
}
