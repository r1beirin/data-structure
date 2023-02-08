#include <stdio.h>
#include <stdbool.h>
#include "src/queue.h"

int main(int argc, char const *argv[]){
    Queue *Q;
    bool operation;
    char element;

    Q = create(&operation);

    if(!operation) printf("Error.\n");

    enqueue(Q, 'A', &operation);
    enqueue(Q, 'B', &operation);
    enqueue(Q, 'C', &operation);

    if(!operation) printf("Error.\n");

    while (!isEmpty(Q)){
        dequeue(Q, &element, &operation);
        printf("%c ", element);
    }

    delete(Q, &operation);
    if(!operation) printf("Error.\n");
    return 0;
}
