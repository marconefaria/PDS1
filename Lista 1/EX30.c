#include <stdio.h>
#include <stdlib.h>

int isMultiplo(int n){
    int x=0, y=0, somax, somay, soma;

    if((n%3 == 0) && (n%5 == 0)){
        x = n;
        /*printf("%d\n", x);*/
    }
    else{
        if((n%3 == 0) || (n%5 == 0)){
        y = n;
        /*printf("%d\n", y);*/
        }
    }
    soma = x + y;
    return soma;
}

int main(){
    int num = 1000, cont=1, soma=0;

    while(cont<num){
        soma = soma + isMultiplo(cont);
        cont++;
    }
    printf("Soma dos multiplos de 3 e 5 entre [0 .. %d] = %d",num, soma);
}
