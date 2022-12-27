#include "queue.h"

QUEUE createQueue(){
    QUEUE Q;
    Q = (QUEUE)malloc(sizeof(Queue));
    if(Q == NULL){
        printf("Error: No hay memoria disponible");
        exit(0);
    }
        Q -> front = NULL;
        Q -> rear = NULL;
        return Q;
}

int isEmptyQueue(QUEUE Q){
    if(Q->front == NULL)
        return TRUE;
    else
        return FALSE;
}

QueueNode * createQueueNode(){
    QueueNode * new;
    new = (QueueNode *)malloc(sizeof(QueueNode));
    if(new == NULL){
        printf("Error: No hay memoria disponible");
        exit(0); 
    }
    return new;
}

int frontQueue(QUEUE Q){
    int v;
    if(isEmptyQueue(Q)==TRUE){
        printf("Error: La cola esta vacia");
        exit(0);
    }
    v = Q ->front->data;
    return v;
}

void enqueue(QUEUE Q, int e){
    QueueNode * new;
    new = createQueueNode( );	
    new -> data = e;
    new -> next = NULL;
    if(Q->rear == NULL)
        Q->front = new;
    else
        Q->rear->next = new;
    Q->rear = new;
}

int dequeue(QUEUE Q){
    int v;
    QueueNode * aux;
    if(isEmptyQueue(Q)==TRUE){
        printf("Error: La cola esta vacia");
        exit(0);
    }
    aux = Q->front;
    v = aux -> data;
    Q->front = aux -> next;
    if(Q->front == NULL)
        Q->rear = NULL;
    free(aux);
    return v;
}

void menuQueue(){
    printf("1. Crear cola\n");
    printf("2. Verificar si la cola esta vacia\n");
    printf("3. Ver el elemento en el frente de la cola\n");
    printf("4. Insertar un elemento en la cola\n");
    printf("5. Eliminar un elemento de la cola\n");
    printf("6. Salir\n");
}