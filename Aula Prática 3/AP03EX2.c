#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b, resto, resultadoMDC;

    printf ("Digite o valor de a:\n");
    scanf ("%d", &a);

    printf ("Digite o valor de b:\n");
    scanf ("%d", &b);

    while (b != 0){
        resto = a%b;
        a = b;
        b = resto;
    }
    resultadoMDC = a;

    printf("Vlor do MDC = %d", resultadoMDC);
}
