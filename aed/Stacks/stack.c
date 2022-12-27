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
        e = aux -> data;
	S->top = aux -> last;
        free(aux);
	return v;
}

void menuStack(){
    printf("MENU\n");
    printf("1. Crear pila\n");
    printf("2. Verificar si la pila esta vacia\n");
    printf("3. Ver el elemento en el tope de la pila\n");
    printf("4. Agregar un elemento a la pila\n");
    printf("5. Eliminar un elemento de la pila\n");
    printf("6. Salir\n");
}