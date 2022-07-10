#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float op1, op2;
    char opr;

    printf("BEM VINDO A CALCULADORA C!!!\n");
    printf("\nDigite o Valor do primeiro operando:\n");
    scanf("%f", &op1);

    printf("\nDigite o Valor do segundo operando:\n");
    scanf("%f", &op2);

    printf("\nAgora digite qual a operacao que deve ser executada:\n");
    printf("Digite ""+"" para adição, ""-"" para subtração, ""*"" para multiplicação e ""/"" para divisão\n");
    opr = getchar();
    scanf("%c", &opr);

    switch (opr){
        case '+':
            printf("%.2f + %.2f = %.2f\n", op1, op2, op1 + op2);
        break;

        case '-':
            printf("%.2f - %.2f = %.2f\n", op1, op2, op1 - op2);
        break;

        case '*':
            printf("%.2f x %.2f = %.2f\n", op1, op2, op1 * op2);
        break;

        case '/':
            printf("%.2f / %.2f = %.2f\n", op1, op2, op1 / op2);
        break;

        default:
            printf("Tipo de operacao selecionado invalido!!!");
    }
}
