#include <stdio.h>
#include <stdlib.h>

int main(){
int i,j;
float s=0, v;

    for(i=0; i<100; i++){
        for(j=0; j<=50; j = j +2){
            v = (i/j);
        }
        s = s + v;
    }
    printf("S = %.2f", s);
}
