#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linkedlist.h"

Node *newNode(bool *operation){
    Node *no;

    no = (Node*) malloc(sizeof(Node));

    if(no = NULL) operation = false;
    else operation = true;

    return no;
}

void deleteNode(Node *no){
    if(no != NULL) free(no);
}

List *create(bool *operation){
    List *L;

    L = (List*) malloc(sizeof(List));

    if(L == NULL) *operation = false;
    else{
        operation = true;
        L->head = NULL;
    }

    return L;
}

bool isFull(List *L){
    return false;
}

bool isEmpty(List *L){
    return L->head == NULL;
}

void insert(List *L, char element, bool *operation){
    Node *no, *lAux;
    bool status;

    no = newNode(&status);  
    no->element = element;
    
    //  1ª Case: empty list
    if(isEmpty(L)){
        no->next = NULL;
        L->head = no;
    }
    else{
        //  2ª Case: insert on final
        lAux = L->head;
        while(lAux->next != NULL){
            lAux = lAux->next;
        }
        lAux->next = no;
    }
}
void remove(List *L, char element, bool *operation){
    Node *no, *previous;
    bool status;

    no = L->head;
    previous = NULL;

    //  Avança até achar o element a ser encontrado
    while (no != NULL && no->element != element){
        previous = no;
        no = no->next;
    }

    //  Verifica se element foi encontrado
    if(no != NULL && no->element == element){
        status = true;
    }
    else status = false;
    
    //  Se status == true, remove o element:
    if(status == true){
        //  Se o nó do element não estiver na cabeça, retira o element e deleta o nó.
        if(no != L->head){
            previous->next = no->next;
            deleteNode(no);
        }
    //  Caso o nó do element esteja na cabeça da lista.
        else{
            L->head = no->next;
            deleteNode(no);
        }
    *operation = true;
  }
  else operation = false;
}

// Ordered insertion
void insertOrd(List *L, char element, bool *operation){
    Node *p, *pAux, *pAnt;
    bool ok;

    p = newNode(&ok);

    if(ok == false) *operation = false;
    else{
        p->element = element;

        //  1ª Caso - Lista vazia
        if(isEmpty(L)){
            p->next = NULL;
            L->head = p;
        }
        else{
            // 2ª Caso - element será o primeiro
            pAux = L->head;
            if(p->element < pAux->element){
                p->next = pAux;
                L->head = p;
            }

            //  3ª Caso - Não é o primeiro. Faz uma busca
            while(p->element >= pAux->element && pAux != NULL){
                //  Avança na lista
                pAnt = pAux;
                pAux = pAux->next;
            }

            //  Ultimo element
            if(pAux == NULL){
                p->next = NULL;
                pAnt->next = p;
            }
            //  Intermediário
            else{
                p->next = pAux;
                pAnt->next = p;
            }
        }
    }

    *operation = true;
}