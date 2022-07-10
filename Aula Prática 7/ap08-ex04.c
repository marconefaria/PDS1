#include <stdio.h>
#include<stdlib.h>
#define	TAM_VET	4

struct	data{
	int	dia,	mes,	ano;
};

struct	aluno{
	char	nome[50];
	double	mediaFinal;
	struct	data nascimento;
};

int	main(){
	int	i=0;
	struct	aluno	faculdade[TAM_VET];

	for(i=0; i<TAM_VET;	i++){
	    printf("Digite o nome do aluno '%d':\n", i+1);
	    fflush(stdin);
	    fgets(faculdade[i].nome, 50, stdin);

	    printf("Digite a media final do aluno '%d':\n", i+1);
	    scanf("%lf", &faculdade[i].mediaFinal);

	    printf("Digite o dia, mes e ano do nascimento do aluno '%d' (SEM / OU ESPACOS!!!):\n", i+1);
	    scanf("%d %d %d", &faculdade[i].nascimento.dia, &faculdade[i].nascimento.mes, &faculdade[i].nascimento.ano);

    }

        puts("Imprimindo	os	dados.\n");
			for(i=0;	i<TAM_VET;	i++){
				puts(faculdade[i].nome);
				printf("Media	Final:	%.2f",	faculdade[i].mediaFinal);
				printf("\n%d/%d/%d\n\n",	faculdade[i].nascimento.dia,
				faculdade[i].nascimento.mes,
				faculdade[i].nascimento.ano	);
            }
        return	(0);
}
