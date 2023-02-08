#include <stdlib.h>
#include "selectionsort.h"

void selectionSort(int *array, int size){
    int menor;
    for(int i = 0; i < size - 1; i++){
        menor = i;

        for(int j = i+1; j < size; j++){
            if(array[j] < array[menor]) menor = j;
        }

        if(i != menor){
            int foo = array[i];
            array[i] = array[menor];
            array[menor] = foo;
        }
    }
}