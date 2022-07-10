#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 30

char *strchar (char *s, char ch){
    int i;
    for(i=0; i<N; i++){
        if(*(s+i) == ch){
            return (s+i);
        }
    }
    return NULL;
}


int main(){
    char s[N], ch='a';

    printf("Insira a string:\n");
    scanf("%s", s);

    printf("\nValor de s: %s\n", s);

    if(strchar(s, ch) == NULL){
        printf("A string s nao contem o caractere %c!!!", ch);
    }else{
        printf("\nEndereco: %p", strchar(s, ch));
    }
}
