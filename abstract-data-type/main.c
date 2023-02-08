#include <stdio.h>
#include "src/tad.h"

int main(int argc, char const *argv[]){
    Point *P;
    Circle *C;

    C = circleCreate(10, 5, 6);
    P = pointCreate(3, 4);

    printf("%d\n", circleInterior(P, C));

    return 0;
}
