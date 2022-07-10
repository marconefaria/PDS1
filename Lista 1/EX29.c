#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, s=0;

     printf("Digite um valor de N para calcular o Somatorio:\n");
     scanf("%d", &n);

    while (n<3){
        printf("Valor digitado menor do que tres!!! Digite novamente...\n");
        printf("Digite um valor de N para calcular o Somatorio:\n");
        scanf("%d", &n);
    }

    for(i = 3; i<= n; i++){
        s += (5 * i) + 2;
    }
    printf("Resultado = %d\n", s);
}
