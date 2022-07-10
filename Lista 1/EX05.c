#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float velocidade, tempo, rendimento, distancia;
    double combustivel;

    tempo = (35.00)/(60.00);
    velocidade = 80.00;
    rendimento = 12.00;

    distancia = velocidade/tempo;

    combustivel = distancia/rendimento;

    printf("O automovel gastara: %.20lf\n", combustivel);
}

/*ERRADO*/
