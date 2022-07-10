#include <stdio.h>
#include <stdlib.h>

int main(){
int i=1;
float s=0, v, E;

    printf("Digite um valor de E para calcular a sequencia:\n");
    scanf("%f", &E);

    while(v>=E){
        v = (1/i);
        s = s + v;
        i=i+2;
    }
        printf("S = %.2f", s);
    }
