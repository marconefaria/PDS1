#include <stdio.h>
#include <stdlib.h>

int aprovadoFrequencia(int presenca, int aulas){
    if ((presenca >= 0.75*aulas)){
        return 1;
    } else{
        return 0;
    }
}

char conceitoAluno(float pontuacao){
    if ((pontuacao >= 90) && (pontuacao <=100)){
        return 'A';
    } else{
        if ((pontuacao < 90) && (pontuacao >= 80)){
        return 'B';
        } else {
            if ((pontuacao < 80) && (pontuacao >=70)){
            return 'C';
            } else {
                if ((pontuacao < 70) && (pontuacao >= 60)){
                return 'D';
                } else {
                    if ((pontuacao < 60) && (pontuacao >= 40)){
                    return 'E';
                    } else{
                        if ((pontuacao < 40) && (pontuacao >= 0)){
                        return 'F';
                        }
                    }
                }
            }
        }
    }

}

int main(){
    int disc, num_aulas, num_pre, cont=1, frequencia;
    float nota;
    char conceito;

    printf("Digite o numero de disciplinas cursadas:\n");
    scanf("%d", &disc);

    while (cont <= disc){
        printf("Numero de aulas lecionadas:\n");
        scanf("%d", &num_aulas);

        printf("Numero de presencas:\n");
        scanf("%d", &num_pre);

        printf("Nota obtida:\n");
        scanf("%f", &nota);

        conceito = conceitoAluno(nota);
        frequencia = aprovadoFrequencia(num_pre, num_aulas);

        if(frequencia == 1){
            if (nota < 60){
                printf("O aluno foi reprovado na disciplina com conceito %c\n", conceito);
            } else{
                printf("O aluno foi aprovado na disciplina com conceito %c\n", conceito);
            }
        } else {
            printf("O aluno foi reprovado por frequencia, seu conceito e %c (infrequente)\n", conceito);
        }

        cont++;
    }
    return 0;
}
