#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 30
#define M 10

char *stringstring (char *str1, char *str2){
    int i=0, j, m , n;
    n = strlen(str1);
    m = strlen(str2);

    if((strlen(str1))>= (strlen(str2))){
        for(i=0; i<strlen(str1); i++){
                if(*(str1+i) == *(str2+i)){
                    return (str1+i);
                }
        }
    }else{
        return NULL;
    }
}

int main(){
    char str1[N], str2[M], *endereco;

    printf("Digite a string 1:\n");
    scanf("%s", str1);

    printf("Digite a string 2:\n");
    scanf("%s", str2);

    if ((stringstring(str1, str2)) == NULL){
        printf("String 1 menor que a string 2!!!\n");
    }else{
        if((stringstring(str1,str2)) != NULL){
            printf("Endereco onde str1 = str2: %x", stringstring(str1, str2));
        }
        else{
            printf("String 2 nao pertence a string 1!!!\n");
        }
    }
}

/*for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                if((*(str1+i) == *(str2+i)) && (*(str1+i) == *(str2+j))){
                    return (i+1);
                }else{
                    return NULL;
                }
            }
        }


ERRADO!!!!*/
