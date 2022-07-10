#include <stdio.h>
#include <stdlib.h>

int main(){
int i,j, sinal=1;
float s=0, v;

    do{
        v = i/(i+2);
        s = s + (sinal * v);
        sinal = -sinal;
        i++;
    } while (v != (-10/100));

    printf("S = %.2f\n", s);

}
