#include <stdio.h>
#include <stdlib.h>
#include "problema1.h"

QUEUE createQueue(){
    QUEUE q = (QUEUE)malloc(sizeof(Queue));
    q -> front = NULL;
    q -> rear = NULL;
    return q;
}

QueueNode * createQNode(){
    QueueNode * new = (QueueNode *)malloc(sizeof(QueueNode));
    if( new == NULL){
        printf("Error: No se pudo reservar memoria para el nodo");
        exit(1);
    }
    return new;
}

int isEmpty(QUEUE Q){
    if (Q -> front == NULL && Q -> rear == NULL){
        return TRUE;
    } else{
        return FALSE;
    }
}

int firstInQueue(QUEUE Q){
    if (isEmpty(Q)){
        printf("Error: La cola esta vacia");
        exit(1);
    }
    return Q -> front -> data;
}

void enqueue(QUEUE Q, int data){
    QueueNode * new = createNode();
    new -> data = data;
    new -> next = NULL;
    if (isEmpty(Q)){
        Q -> front = new;
        Q -> rear = new;
    } else{
        Q -> rear -> next = new;
        Q -> rear = new;
    }
    Q -> rear = new; 
}

int dequeue(QUEUE Q){
    if(isEmpty(Q)){
        printf("Error: La cola esta vacia");
        exit(1);
    }
    int data = Q -> front -> data;
    QueueNode * aux = Q -> front;
    Q -> front = Q -> front -> next;
    free(aux);
    return data;
}

int addData(){
    
}