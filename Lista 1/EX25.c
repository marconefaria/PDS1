#include <stdio.h>
#include <stdlib.h>

int main(){
    int num=0, div=1;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    while (num<0){
        printf("Numero inserido menor que zero!!!\n");
        printf("Digite um numero inteiro:\n");
        scanf("%d", &num);
    }

    while (div > 0){
        div++;
        if (div < num/2){
        if (num%2 != 0 || num==2){
            printf ("E primo!!!");
            break;
        }
        else{
            printf ("Nao e Primo!!!");
            break;
        }
        } else{
            printf ("E primo!!!");
            break;
        }
}
}
