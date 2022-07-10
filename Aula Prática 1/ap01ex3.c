#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Autor: Marcone Faria 2019021573*/
int main(){
    float s, a, b, c, ar;

    a = 4;
    b = 3;
    c = 5;

    /*admitindo valores declarados para a, b e c como sendo 4,3 e 5 respectivamente*/

    s = (a+b+c)/2;

    ar = sqrt(s*(s-a)*(s-b)*(s-c));

    /*no printf formatei a exibição em duas casas decimais com %.2f*/

    printf("Valor da area = %.2f\n", ar);

}
