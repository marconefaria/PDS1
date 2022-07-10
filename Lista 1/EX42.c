#include <stdio.h>
#include <stdlib.h>

int isBissexto(int ano){
    if ((ano%100 > 0) && (ano%4 == 0) || (ano%400 == 0)){
        return 0; /*Retorna 0 se e bissexto*/
    }
    else {
        return 1; /*Retorna 1 se nao e bissexto*/
    }
}

int diasPassados(int dia, int mes, int bi){
int diaspassados;
    if((bi == 1)||(bi == 0)){
        switch (mes){
            case 1:
                diaspassados = dia;
            break;
            case 2:
                diaspassados = 31 + dia;
            break;
            case 3:
                diaspassados = 31 + 28 + dia;
            break;
            case 4:
                diaspassados = 31 + 28 + 31 + dia;
            break;
            case 5:
                diaspassados = 31 + 28 + 31 + 30 + dia;
            break;
            case 6:
                diaspassados = 31 + 28 + 31 + 30 + 31 + dia;
            break;
            case 7:
                diaspassados = 31 + 28 + 31 + 30 + 31 + 30 + dia;
            break;
            case 8:
                diaspassados = 31 + 28 + 31 + 30 + 31 + 30 + 31 + dia;
            break;
            case 9:
                diaspassados = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + dia;
            break;
            case 10:
                diaspassados = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + dia;
            break;
            case 11:
                diaspassados = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + dia;
            break;
            case 12:
                diaspassados = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + dia;
            break;
        }
    } if ((bi == 0) && (mes == 2)){
        diaspassados = 31 + dia;
    }
    if (bi == 0){
        diaspassados++;
    }
    return diaspassados;
    }

int main(){
    int d, m, a, bissexto, p;

    printf("Digite o dia:\n");
    scanf("%d", &d);

    printf("Digite o mes:\n");
    scanf("%d", &m);

    printf("Digite o ano:\n");
    scanf("%d", &a);

    bissexto = isBissexto(a);
    p = diasPassados(d, m, bissexto);
    printf("Ja se passaram: %d dias", p);
}
