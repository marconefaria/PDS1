#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 70

void eliminar(char *v, char ch){
    int i,j, aux=0, cont=0;

    for(i=0; i<strlen(v); i++){
        if(*(v+i) == ch){
            *(v+i) = ' ';
            cont++;
        }
    }
    for(i=0; i<strlen(v); i++){
        for(j=i+1; j<strlen(v); j++){
            if(*(v+i) == ' '){
                *(v+i) = *(v+j);
                *(v+j) = '\n';
            }
        }
    }
    puts(v);
}

int main(){
    char s[N], ch='a';

    printf("Insira a string:\n");
    scanf("%s", s);

    printf("\nValor de s: %s\n", s);

    eliminar(s, ch);
}

