#include <stdio.h>
#include <stdlib.h>

int MDC(int a, int b){
    int resto, resultadoMDC;

    while (b != 0){
        resto = a%b;
        a = b;
        b = resto;
    }

    resultadoMDC = a;
    return (resultadoMDC);
}

int main(){
    int num1, num2, resultado;
    char continuar;

    do{
    printf ("Digite o valor de a:\n");
    scanf ("%d", &num1);

    printf ("Digite o valor de b:\n");
    scanf ("%d", &num2);

    resultado = MDC(num1, num2);
    printf ("MDC = %d \n", resultado);

    printf ("Deseja continuar? (S/N)");
    continuar = getche();
    printf ("\n");

    }while ((continuar == 'S')||(continuar == 's'));

    return 0;
}
