#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,num=1,i=0,j, qte = 1;

    printf ("Digite um numero de linhas para calcular o triangulo de Floyd:\n");
    scanf ("%d", &n);

    while (n<= 0){
        printf ("Voce entrou com um numero invalido, tente outro numero maior que zero!!!\n");
        printf ("Digite novamente um numero de linhas para calcular o triangulo de Floyd:\n");
        scanf ("%d", &n);
    }

    while (i < n){
        for(j = 0; j < qte; j++){
            printf("%d\t", num);
            num++; // começa com 1 e vai aumnetando
        }
        printf("\n");
        qte++; // aumenta o numero de colunas
        i++; //aumenta o numero de linhas até ficar igual ao n entrado pelo usuario
    }
}
