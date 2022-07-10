#include <stdio.h>
#include <stdlib.h>

int isPrimo(int n){
int div=0,cont=1;
    while (cont <= n){
        if (n%cont == 0){
            div++;
        }
    cont++;
    }

    if (div == 2){
        return 1;
    }else {
        return 0;
    }
}

int main(){
    int num=0;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    while (num<0){
        printf("Numero inserido menor que zero!!!\n");
        printf("Digite um numero inteiro:\n");
        scanf("%d", &num);
    }

    if ((isPrimo(num)) == 1){
        printf("E Primo!!!");
    } else{
        printf("Nao e Primo!!!");
    }
}
