#include <stdio.h>
#include <stdlib.h>

float pagamento_m(float m){
    if ((m < 10) && (m > 0)){
        return 10*m;
    } else {
        if ((m <= 10) && (m < 20)){
            return 11.50*m;
        } else{
            if (m >= 20){
                return 13*m;
            }
        }
    }
}

int main(){
    float vale_a, vale_t, metros, pagamento_t;
    int n,cont;

    printf("Digite o numero de pedreiros desejado:\n");
    scanf("%d", &n);

    for (cont=1; cont<=n; cont++){
        printf("Digite o valor do vale-alimentacao:\n");
        scanf("%f", &vale_a);
        printf("Digite o valor do vale-transporte:\n");
        scanf("%f", &vale_t);
        printf("Digite o numero de metros quadrados trabalhados:\n");
        scanf("%f", &metros);

        pagamento_t = pagamento_m(metros) + vale_a + vale_t;
        printf("O pedreiro deve receber R$ %.2f\n", pagamento_t);
    }
    return 0;
}
