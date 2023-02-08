#include <stdlib.h>
#include <stdio.h>
#include "src/project.h"

int main(){
    int valor, vertice, arestas, ini, fim;
    Stack *S;
    S = criar();

    scanf("%d %d", &vertice, &arestas);
    int matriz[vertice][vertice];

    armazenamento(vertice, arestas, matriz);
    
    scanf("%d %d", &ini, &fim);
    valor = procura(vertice, matriz, S, ini, fim);

    printf("%d\n", valor);
}