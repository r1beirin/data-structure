#include <stdlib.h>
#include <stdio.h>
#include "bubblesort.h"

void bubbleSort(int *array, int n){
    int aux, troca, fim = n;

    //  Usa o while para botar o maior elemento no final do vetor
    //  Quando o maior elemento é colocado no final, a variável fim
    //  diminui 1 para diminuir o tamanho na comparação.
    do{
        troca = -1;
        
        //  Percorre todo o vetor
        for(int i = 0; i < fim - 1; i++){

            //  Faz a troca se o vet[i] é maior que vet[i+1]
            if(array[i] > array[i+1]){
                aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
                troca = i;
            }
        }

        fim--;
    } while (troca != -1);
    
}