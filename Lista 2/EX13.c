#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

void calc(int * v, int num, int * xmin, int * xmax){
    int k;
    for(k=0; k<num; k++){
        if(*(v+k) > *xmax){
            *xmax = *(v+k);
        }
        if(*(v+k) < *xmin){
            *xmin = *(v+k);
        }
    }
}

int main(){
    int v[N], num, xmin=0, xmax=0, i;

    for(i=0; i<N; i++){
        v[i] = rand()%200;
    }

    for(i=0; i<N; i++){
        printf("%d\t", v[i]);
    }

    num = rand()%10;
    printf("\nNUM = %d", num);

    xmin = v[0];
    xmax = v[0];

    calc(v, num, &xmin, &xmax);
    printf("\n\nO maior valor: %d", xmax);
    printf("\nO menor valor: %d", xmin);
}
