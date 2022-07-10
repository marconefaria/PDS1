#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Autor: Marcone Faria 2019021573*/
int main(){
    int b = 4,c = 2,d = 3;
    float a = 1.5, e = 1.2, f = 4.3, V1, V2, V3;

    V1 = (a*(c+d))/(b*(e+f));

    V2 = ((pow(a, b+c))/(e+f)) + d;

    V3 = ((-b)+(sqrt((pow(b, 2)-(4*a*c)))))/(2*a);

    printf("V1 = %f\n", V1);
    printf("V2 = %f\n", V2);
    printf("V3 = %f\n", V3);
}
