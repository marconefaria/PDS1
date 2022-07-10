#include <stdio.h>
#include <stdlib.h>

int numTermos(int n){
    long unsigned int cont=0;

    while(n > 1){
        if(n%2 != 0){
            n = (3*n) + 1;
            cont++;
        }else{
            n = n/2;
            cont++;
        }
    }
    return cont;
}

int maisTermos(int n){
    long unsigned int maiorTermo=0, x=0;
    maiorTermo = numTermos(n);

    while(x < n){
        if(maiorTermo <= numTermos(x)){
            maiorTermo = x;
        }
        ++x;
    }
    return maiorTermo;
}

int main(){
    long unsigned int N=1000000, resultado;
    resultado = maisTermos(N);
    printf("O numero com maior numero de termos no intervalo [1 .. 1000000] e:%ld", resultado);
}
