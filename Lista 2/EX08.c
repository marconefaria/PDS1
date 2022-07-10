#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 30

void ordem(char []);

int main(){
    char string[N];

    printf("Insira a string:\n");
    scanf("%s", string);

    ordem(string);
}

void ordem(char palavra[N]){
    int i,j, maiorValor=0;
    for(i=0; i<strlen(palavra); i++){
        for(j=i+1; j<strlen(palavra); j++){
            if(palavra[i] > palavra[j]){
                maiorValor = palavra[i];
                palavra[i] = palavra[j];
                palavra[j] = maiorValor;
            }
        }
    }

    printf("%s", palavra);
}
