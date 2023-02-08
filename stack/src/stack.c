#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#define MAX 50

Stack *create(){
    Stack *S;
    S = malloc(sizeof(Stack));
    S->element = malloc(MAX * sizeof(int));

    if(S != NULL){
        S->top = -1;
    }

    return S;
}

void delete(Stack *S){
    free(S);
}

int isEmpty(Stack *S){
    if(S->top == -1) return 1;
    else return 0;
}

int isFull(Stack *S){
    return 0;
}

void push(Stack *S, int elem, int *status){
    if(isFull(S)) *status = 0;
    else{
        S->top += 1;
        S->element[S->top] = elem;
        *status = 1;
    }
}

void pop(Stack *S, int *returnElement, int *status){
    if(isEmpty(S)) *status = 0;
    else{
        *returnElement = S->element[S->top];
        S->top -= 1;
        *status = 1;
    }
}
