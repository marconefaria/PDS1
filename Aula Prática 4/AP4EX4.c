#include <stdio.h>
#include <stdlib.h>

void somandoValor(int a, int b, int somaValor){
    somaValor = somaValor + a + b;
    printf("VOID - Valor de somaValor = %d\n", somaValor);
}

void somandoReferencia(int a, int b, int *somaReferencia){
    *somaReferencia = somaReferencia + a + b;
    printf("VOID - Valor de somaReferencia = %d\n", *somaReferencia);
}

int main(){
    int x = 10;
    int y = 5;

    int somaValor = 0;
    int somaReferencia = 0;

    somandoValor(x,y, somaValor);
    somandoReferencia(x,y, &somaReferencia);

    printf("MAIN - Valor de somaValor = %d\n",somaValor);
    printf("MAIN - Valor de somaReferencia = %d\n",somaReferencia);
    return 0;
}
