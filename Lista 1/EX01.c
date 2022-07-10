#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int vertices, faces, arestas;

    faces = 6;
    arestas = 12;

    vertices = arestas - faces + 2;
    printf ("Vertices = %d\n", vertices);
}
