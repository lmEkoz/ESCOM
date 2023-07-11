#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

STACK createStack ( ){
	STACK S;
	S = (STACK)malloc(sizeof(Stack));
	if(S == NULL){
        printf("Error: No hay memoria disponible");
		exit(0);
	}
        S -> top = NULL;
        return S;
}

int isEmpty(STACK S){
	if(S-> top == NULL)
		return TRUE;
	else
		return FALSE;
}

StackNode * createStackNode(){
   StackNode * new;
   new = (StackNode *)malloc(sizeof(StackNode));
   if(new == NULL){
        printf("Error: No hay memoria disponible");
        exit(0); 
   }
   return new;
}

int topStack(STACK S){
	int v;
	if(isEmpty(S)==TRUE){
        printf("Error: La pila esta vacia");
		exit(0);
	}
	v = S ->top->data;
	return v;
}

void pushStack(STACK S, int e){
        StackNode * new;
        new = createStackNode( );	
        new -> data = e;
        new -> last = S->top;
        S-> top = new;
}

int popStack(STACK S){
	int v;
       StackNode * aux;
	if(isEmpty(S)==TRUE){
		printf("Error: La pila esta vacia");
		exit(0);
	}
	aux = S->top;
        v = aux -> data;
	S->top = aux -> last;
        free(aux);
	return v;
}

void operar(STACK S, char c){
    int res;
    int e1,e2;

    switch(c) {
        case '^':
            e1 = popStack(S);
            e2 = popStack(S);
            printf("%d ^ %d = %d\n", e2, e1, e2^e1);
            res = e2 ^ e1;
            pushStack(S, res);
            break;
        case '*':
            e1 = popStack(S);
            e2 = popStack(S);
            printf("%d * %d = %d\n", e2, e1, e2*e1);
            res = e2 * e1;
            pushStack(S, res);
            break;
        case '/':
            e1 = popStack(S);
            e2 = popStack(S);
            printf("%d / %d = %d\n", e2, e1, e2/e1);
            res = e2 / e1;
            pushStack(S, res);
            break;
        case '+':
            e1 = popStack(S);
            e2 = popStack(S);
            printf("%d + %d = %d\n", e2, e1, e2+e1);
            res = e2 + e1;
            pushStack(S, res);
            break;
        case '-':
            e1 = popStack(S);
            e2 = popStack(S);
            printf("%d - %d = %d\n", e2, e1, e2-e1);
            res = e2 - e1;
            pushStack(S, res);
            break;
        default:
            printf("Error: revisar cadena");
            break;
    }
}