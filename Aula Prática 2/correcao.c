#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, nota3;
    int cred1, cred2, cred3, c1, c2, c3;
    double rsg;

    printf ("Digite o valor da 1a nota:\n");
    scanf ("%f", &nota1);

    printf ("Numero de creditos da disciplina:\n");
    scanf ("%i", &cred1);

    printf ("Digite o valor da 2a nota:\n");
    scanf ("%f", &nota2);

    printf ("Numero de creditos da disciplina:\n");
    scanf ("%i", &cred2);

    printf ("Digite o valor da 3a nota:\n");
    scanf ("%f", &nota3);

    printf ("Numero de creditos da disciplina:\n");
    scanf ("%i", &cred3);

    if (((nota1 <= 100) && (nota1 >= 0)) && ((nota2 <= 100) && (nota2 >= 0)) && ((nota3 <= 100) && (nota3 >= 0))){

        if (((cred1 <= 6) && (cred1 >= 2)) && ((cred2 <= 6) && (cred2 >= 2)) && ((cred3 <= 6) && (cred3 >= 2))){

            if((cred1%2 == 0) && (cred2%2 == 0) && (cred3%2 == 0)){

                if (nota1 >= 90){
                    c1 = 5;
                }
                else{
                    if (nota1 >= 80){
                        c1 = 4;
                    }
                    else{
                        if (nota1 >= 70){
                            c1 = 3;
                    }
                    else{
                        if (nota1 >= 60){
                                c1 = 2;
                        }
                        else {
                            if (nota1 >= 50){
                                c1 = 1;
                        }
                        else {
                            if (nota1 <= 50){
                                c1 = 0;
                            }
                        }
                    }
                }
            }
        }
        if (nota2 >= 90){
                    c2 = 5;
                } else {
                    if (nota2 >= 80){
                        c2 = 4;
                    }
                    else{
                        if (nota2 >= 70){
                            c2 = 3;
                        }
                        else{
                            if (nota2 >= 60){
                                c2 = 2;
                            }
                            else{
                                if (nota2 >= 50){
                                    c2 = 1;
                                }
                                else{
                                    if (nota2 <= 50){
                                        c2 = 0;
                                    }
                                }
                            }
                        }
                    }
                }

                if (nota3 >= 90){
                    c3 = 5;
                } else {
                    if (nota3 >= 80){
                        c3 = 4;
                    }
                    else{
                        if (nota3 >= 70){
                            c3 = 3;
                        }
                        else{
                            if (nota3 >= 60){
                                c3 = 2;
                            }
                            else{
                                if (nota3 >= 50){
                                    c3 = 1;
                                }
                                else{
                                    if (nota3 <= 50){
                                        c3 = 0;
                                    }
                                }
                            }
                        }
                    }
                }
        rsg = ((c1*cred1) + (c2*cred2) + (c3*cred3))/(cred1 + cred2 + cred3);
                printf("RSG = %lf", rsg);
    } else
            printf("Algum valor de creditos inserido incorretamente!!!");

        }else
            printf("Algum valor de creditos inserido incorretamente!!!");

    }else
        printf ("Algum valor de nota inserido incorretamente.. confira os valores e tente novamente..");
}
