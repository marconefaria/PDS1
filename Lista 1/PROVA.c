/*#include<stdio.h>

int main(){
    int x=2, y=5, p=7, a=6;
    y=0;
    p = (p>a++) ? ++x : --y;
    p = --y;
    p++;
    y = --x;
    p = (++x) * (--y);

    printf("%d %d %d %d", x, y, p, a);
}*/
#include<stdio.h>
int i =10, j=20;

int para(int a, int b, int c){
    return((a--) * (++b) + (c--));
    /*incrementa e decrementa as variaveis locais a, b, c*/
}

int teste(int x, int y, int z){
    i = 2* para(x,y,z);
    return i;
}

int main(){
    int k = 15;
    j = teste(i, j, k--);
    /*decrementa k, mas depois de finalizar a função*/
    i = para(k, j, i);
    printf("%d %d %d", i, j, k);
}
