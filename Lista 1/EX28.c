#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,sinal=1;
    float termo, pi=0;

    do{
        termo = 4.0/(2*i + 1);
        pi = pi + (sinal * termo);
        sinal = -sinal;
        i++;
    } while (termo >= 0.0001);

    printf("Valor calculado de PI: %f (%d termos)\n", pi, i);
}
