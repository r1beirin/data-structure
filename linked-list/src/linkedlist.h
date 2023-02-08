#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

    typedef struct node Node;
    struct node{
        char element;
        Node *next;
    };

    typedef struct{
        Node *head;
    } List;

#endif