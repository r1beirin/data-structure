#ifndef STACK_H_
#define STACK_H_
    
    typedef struct stack{
        int top;
        int *element;
    } Stack;

    Stack *createStack();
    void deleteStack(Stack *S);
    int isEmptyStack(Stack *S);
    int isFullStack(Stack *S);
    void push(Stack *S, int element, int *status);
    void pop(Stack *S, int *returnElement, int *status);

#endif