#include <stdlib.h>
#include "insertionsort.h"

void insertionSort(int *array, int size){
    int foo, j;

    for(int i = 1; i < size; i++){
        foo = array[i];
        
        for(j = i; (j > 0) && (foo < array[j-1]); j--){
            array[j] = array[j-1];
        }

        array[j] = foo;
    }
}