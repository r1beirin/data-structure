#ifndef QUEUE_H_
#define QUEUE_H_

    typedef struct{
        int first;
        int final;
        int numElements;
        char *element;
    } Queue;

    Queue *create(bool *operation);
    void delete(Queue *Q, bool *operation);
    bool isEmpty(Queue *Q);
    bool isFull(Queue *Q);
    void enqueue(Queue *Q, char element, bool *operation);
    void dequeue(Queue *Q, char *element, bool *operation);

#endif