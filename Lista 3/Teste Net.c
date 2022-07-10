#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

typedef struct contato CONTATO;
struct contato {
    int ativo;
    char nome[50];
    char cpf[30];
};
void cadastrar();
void listar();
void editar();
void flush_in();


FILE *arquivo;
CONTATO ctt;
int op;
int main ( void ) {
    setlocale ( LC_ALL, "Portuguese" );

    do {
        system ( "cls" );
        printf ( "\n1 - Cadastrar" );
        printf ( "\n2 - Listar" );
        printf ( "\n3 - Editar" );
        printf ( "\n0 - Sair\n\n" );

        printf ( "Digite uma opção: " );
        scanf ( "%d", &op );

        switch ( op ) {
            case 1:
                cadastrar();
                break;

            case 2:
                listar();
                break;

            case 3:
                editar();
                break;

            case 0:
                break;

            default:
                printf ( "Opção Inválida!" );
                break;
        }

    } while ( op != 0 );
}
void cadastrar() {
    do {
        arquivo = fopen ( "base.txt", "a+b" );
        system ( "cls" );
        fflush ( stdin );
        printf ( "Nome: " );
        gets ( ctt.nome );

        fflush ( stdin );
        printf ( "CPF: " );
        gets ( ctt.cpf );

        ctt.ativo = 1;

        fwrite ( &ctt, sizeof ( CONTATO ), 1, arquivo );
        fclose ( arquivo );
        printf ( "Deseja realizar novo Cadastro (s/n)?" );
    } while ( getche() == 's' );

}
void listar() {
    system ( "cls" );

    arquivo = fopen ( "base.txt", "rb" );

    while ( fread ( &ctt, sizeof ( CONTATO ), 1, arquivo ) == 1 ) {
        printf ( "Status: %d\n", ctt.ativo );
        printf ( "Nome: %s\n", ctt.nome );
        printf ( "CPF: %s\n", ctt.cpf );
        printf ( "--------------------\n\n" );
    }

    fclose ( arquivo );
    getch();

}
void editar() {
    long int posicao = 0;/*posicao começa na primeira linha*/
    char nome[50];
    printf ( "Digite o CPF" );
    flush_in();
    scanf("%50[^\n]%*c", nome);

    arquivo = fopen ( "base.txt", "r+b" );

    system ( "cls" );

    while ( fread ( &ctt, sizeof ( CONTATO ), 1, arquivo ) == 1 ) { /*depois de ler o ponteiro avança sizeof ( CONTATO ) bytes situando-se no principio da segunda estrutura do arquivo se é que existe uma segunda estrutura.*/
        if( strcmp(nome, ctt.nome ) == 0 ){ /*Se o nome coincidir....
            /*Faça o que quiser nesse ponto, deletar, editar dados etc, etc.*/
            strcpy( ctt.nome, "pirueba"); /*Eu mudarei o nome para pirueba >_<*/

            /*Antes de guardar o nome voltamos ao inicio da estrutura anterior pois logo após fazer uma leitura o ponteiro se situa na seguinte estrutura, precisamos retroceder sizeof ( CONTATO ) bytes com fsee*/
            fseek ( arquivo, posicao, SEEK_SET );

            /*Guardamos ctt novamente com fwrite*/
            fwrite(&ctt,sizeof(CONTATO),1,arquivo);
            break; /* Como ja editamos o arquivo saimos do while com um break;*/
        }

        /*Se não encontrou então devemos repetir o processo. porém como o ponteiro avançará novamente, antes devemos anotar a posição atual do ponteiro*/
        posicao = ftell(arquivo);

    }

    fclose ( arquivo );
}

void flush_in() {
    int ch;

    while ( ( ch = fgetc ( stdin ) ) != EOF && ch != '\n' ) {}
}
