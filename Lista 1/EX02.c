#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float salario, agua;
    double conta;

    printf("Digite o valor do salario minimo: \n");
    scanf("%f", &salario);

    printf("Digite o valor, em litros, da agua consumida no mes: \n");
    scanf("%f", &agua);

    conta = ((0.02) * salario) * (agua / 1000);

    printf("O valor da conta de agua desse mes e de: %lf\n",conta);
    printf("O valor da conta de agua desse mes, com o desconto, e de: %lf\n", conta * 0.85);
}
