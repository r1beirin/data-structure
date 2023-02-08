#include "src/stack.h"
#include <stdio.h>

int main(int argc, char const *argv[]){
    int status = 0;
    Stack *S;
    S = create();

    push(S, 10, &status);
    push(S, 20, &status);

    if(status == 0) printf("Error.");
    else printf("Element %d in position %d\n", S->element[S->top], S->top);

    return 0;
}
