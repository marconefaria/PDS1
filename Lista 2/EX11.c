#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 70

void imprime_sobrenome (char *nome_completo){
    int a,i, cont=0;
    char sobrenome[N];
    a = strlen(nome_completo);

    for(i=a-1; *(nome_completo+i)!= ' '; i--){
        sobrenome[cont]=nome_completo[i];
        cont++;
    }
    printf("\nSobrenome: %s", strrev(sobrenome));
}

int main(){
    char s[N];

    printf("Digite seu nome completo:\n");
    gets(s);

    printf("\nNome Completo: %s\n", s);
    imprime_sobrenome(s);
}
