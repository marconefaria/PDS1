#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=1000000, cont=0;

    while(n > 1){
        if(n%2 != 0){
            n = (3*n) + 1;
            printf("%d \t", n);
            cont++;

        }else{
            n = n/2;
            printf("%d \t", n);
            cont++;
        }
        if(n<0){
            break;
        }
    }
    printf("\n\n\nNumero de Termos: %d", cont);
}
