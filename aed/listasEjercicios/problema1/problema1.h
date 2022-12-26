#define TRUE 1
#define FALSE 0

typedef struct QueueNode{
    int data;
    struct QueueNode * next;    
}QueueNode;

typedef struct{
    QueueNode * front;
    QueueNode * rear;
}Queue;

typedef Queue * QUEUE;

QUEUE createQueue();
QueueNode * createNode();
int isEmpty(QUEUE Q);
int firstInQueue(QUEUE Q);
void enqueue(QUEUE Q, int data);
int dequeue(QUEUE Q);
void addData();