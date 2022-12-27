#ifndef queue
#define queue

#define TRUE    1
#define FALSE   0

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
int isEmpty(QUEUE Q);
int firstQueue(QUEUE Q);
void enqueue(QUEUE Q, int e);
int dequeue(QUEUE Q);
QueueNode * createQueueNode();
void menuQueue();