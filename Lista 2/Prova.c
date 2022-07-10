#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[] = {6,2,1,0,5,3,2};
    int b[] = {2,5,6,8,2,0,4,5,11};
    int s=0, m=0, n=0, i=0;

    while(*(a+i)){
        s += *(b + *(a+i)); /*4, 4+6, */
        /*printf("s = %d\n", s);*/
        m += (s + *(b + *(a+i+1)));/**/
        n += (m - s);
        i++;
    }

    printf("s = %d, m = %d, n = %d\n", s, m, n);
}
