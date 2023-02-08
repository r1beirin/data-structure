#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define MAX 50

typedef struct{
    int first;
    int final;
    int numElements;
    char *element;
} Queue;

Queue *create(bool *operation){
    Queue *Q;

    Q = malloc(sizeof(Queue));
    Q->element = malloc(MAX * sizeof(char));

    if(Q == NULL) *operation = false;
    else{
        Q->first = 0;
        Q->final = 0;
        Q->numElements = 0;
        *operation = true;
    }

    return Q;
}

void delete(Queue *Q, bool *operation){
    if(Q != NULL){
        free(Q);
        *operation = true;
    }
    else *operation = false;
}

bool isEmpty(Queue *Q){
    return Q->numElements == 0;
}

bool isFull(Queue *Q){
    return false;
}

void enqueue(Queue *Q, char element, bool *operation){
    if(isFull(Q)) *operation = false;
    else{
        Q->element[Q->final] = element;
        
        if(Q->final == MAX - 1) Q->final = 0;
        else Q->final += 1;

        Q->numElements += 1;
        *operation = true;
    }
}

void dequeue(Queue *Q, char *element, bool *operation){
    if(isEmpty(Q)) *operation = false;
    else{
        *element = Q->element[Q->first];

        if(Q->first == MAX - 1) Q->first = 0;
        else Q->first += 1;

        Q->numElements -= 1;
        *operation = true;
    }
}