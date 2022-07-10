#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;

    printf("Digite o valor do cateto b: \n");
    scanf("%f", &b);

    printf("Digite o valor do cateto c: \n");
    scanf("%f", &c);

    a = sqrt((pow(b,2))+(pow(c,2)));
    printf("O valor da hipotenusa sera %lf\n", a);

}
