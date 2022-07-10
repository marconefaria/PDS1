#include <stdio.h>
#include <stdlib.h>

int divisivel(int n){
    int divisor=1, cont=1;
    while(n>0){
        while (n%divisor==0){
        if (n%divisor == 0){
            cont++;
        }
        divisor++;
        }
    n++;
    }
    if (cont == 20){
        return n;
    }


}

int main(){
    int num=1;
    printf("%d", divisivel(num));
}
