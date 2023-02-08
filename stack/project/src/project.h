#include "project.c"
#ifndef PROJECT_H_
#define PROJECT_H_
    //  Definição de struct Pair contendo i e j para manipulação na pilha.
    typedef struct{
        int i;
        int j;
    }Pair;

    //  Definição da Pilha contendo o topo e um vetor contendo i,j como elementos unicos.
    typedef struct{
        int top;
        Pair *vet;
    }Stack;
    
    
    bool empty(Stack *S);
    bool full(Stack *S);
    bool pop(Stack *S, int *i, int *j);
    bool push(Stack *S, int i, int j);
    Stack* criar();
    bool destruir(Stack *S);
    void armazenamento(int vertice, int arestas, int matriz[vertice][vertice]);
    int procura(int vertice, int matriz[vertice][vertice], Stack *S,int ini, int fim);

#endif