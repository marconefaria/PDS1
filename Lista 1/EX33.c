#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor,i,j,z;

    printf("Digite um valor entre 3 e 18:\n");
    scanf("%d", &valor);

    while((valor<3) || (valor>18)){
        printf("\nValor inserido fora do intervalo permitido!!! Digite novamente:\n");
        printf("Digite um valor entre 3 e 18:\n");
        scanf("%d", &valor);
    }

    for(i=1; i<=6; i++){
        for(j=1; j<=6; j++){
            for(z=1; z<=6; z++){
                if((i+j+z) == valor){
                    printf("\n%d %d %d\n", i,j,z);
                }
            }
        }
    }
}
