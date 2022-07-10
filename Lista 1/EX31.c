#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, fib1 = 1, fib2 = 1, soma, n=10, pares;

        for (i = 3; i <= n; i = i + 1){
        soma = fib1 + fib2;
        fib1 = fib2;
        fib2 = soma;

        printf("%d\n", soma);

            if (soma%2 == 0){
                pares += soma;
            }
        }
        printf("Soma = %d\n", pares+1);
}
