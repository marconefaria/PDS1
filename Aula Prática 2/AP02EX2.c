#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso, altura;
    double imc;

    printf("Insira seu peso:\n");
    scanf ("%f", &peso);

    printf("Insira sua altura:\n");
    scanf ("%f", &altura);

    if ((peso > 0) && (altura > 0)){
        imc = 80/(pow(altura,2));

        if (imc < 17){
            printf("Muito abaixo do peso!!!");
        }
        else {
            if ((imc >= 17) && (imc <= 18.49)){
                printf("Abaixo do peso!!!");
            }

            else{
                if ((imc >= 18.5) && (imc <= 24.99)){
                    printf("Peso normal..");
                }

                else {
                    if ((imc >= 25) && (imc <= 29.99)){
                        printf("Acima do peso!!!");
                    }

                    else {
                        if ((imc >= 30) && (imc <= 34.99)){
                            printf("Obesidade I!!!");
                        }

                        else {
                            if ((imc >= 35) && (imc <= 39.99)){
                                printf("Obesidade II (severa)!!!");
                            }

                            else {
                                if (imc >= 40){
                                    printf("Obesidade III (morbida)!!!");
                            }
                        }

                    }

                }

                }
            }
        }
    }



    else {
        printf("Valores de peso e/ou altura invalidos.. tente novamente!");
    }

}
