#include <stdlib.h>
#include <stdio.h>
#include "src/selectionsort.h"

int main(){
    int vet[5] = {4,5,3,2,1};
    
    selectionSort(vet, 5);

    for(int i = 0; i < 5; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}
