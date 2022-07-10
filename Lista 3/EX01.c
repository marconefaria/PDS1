#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char caractere;
    int cont=0;
    FILE *arq;
    arq = fopen("file.txt","r");

    if(arq != NULL){
         while((caractere = fgetc(arq)) != EOF) {
            if (caractere == 'a' || caractere == 'A'){
            cont++;
            }
        }
        fclose(arq);
        printf("O arquivo tem %d caracteres do tipo 'a' ou 'A'", cont);
    }
}
