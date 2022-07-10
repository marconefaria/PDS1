#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;

    a = !(1 && (1 || 0));
    b = !(1 && !(1 || 0));
    c = (0 || 1) && 0;

    if (a == 0){
        printf("a = falso!!!\n");
    }
    else{
        printf("a = verdadeiro!!!\n");
    }

    if (b == 0){
        printf("b = falso!!!\n");
    }
    else{
        printf("b = verdadeiro!!!\n");
    }

    if (c == 0){
        printf("c = falso!!!\n");
    }
    else{
        printf("c = verdadeiro!!!\n");
    }
}
