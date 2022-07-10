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

int somaPrimo(int n, int primo){
    int p=0, np=0, soma;
    if (primo == 1){
        p = n;
    }
    return soma = p;
}

int main(){
    int num, cont=0, somaPrimos=0;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    while(cont <= num){
        somaPrimos =  somaPrimos + (somaPrimo(cont, isPrimo(cont)));
        cont++;
    }
    printf("A soma dos numeros primos no intervalo [1 .. %d] e: %d\n", num, somaPrimos);
}
