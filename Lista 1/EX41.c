#include <stdio.h>
#include <stdlib.h>

int funcaoMDC(int x, int y){
    int resto;
    resto = x%y;
    x = y;
    y = resto;
    return x;
}

int main(){
    int a,b, MDC;

    printf("Digite o valor de a:\n");
    scanf("%d", &a);

    printf("Digite o valor de b:\n");
    scanf("%d", &b);

    while(b==0){
        printf("Valor de b igual a zero!!! Digite novamente:\n");
        printf("Digite o valor de b:\n");
        scanf("%d", &b);
    }

    MDC = funcaoMDC(a, b);
    printf("O MDC entre %d e %d e: %d\n", a, b, MDC);
}
