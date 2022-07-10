#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Voce ja e maior de idade!!!");
    }
    else{
        printf("Voce nao e maior de idade!!!");
    }

}
