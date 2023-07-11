#ifndef stack
#define stack

#define TRUE    1
#define FALSE   0

typedef struct StackNode{
    int data;
    struct StackNode * last;
}StackNode;

typedef struct{
	StackNode * top;
}Stack;
typedef Stack * STACK;

STACK createStack();
int isEmpty(STACK S);
int topStack(STACK S);
void pushStack(STACK S, int e);
int popStack(STACK S);
StackNode * createStackNode();
void operar(STACK S,char c);

#endif