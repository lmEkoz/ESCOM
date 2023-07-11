#ifndef ARBOL_H
#define ARBOL_H
#include <stdio.h>
#include <stdlib.h>

typedef struct Arbol{
    int elemento;
    int nivel;
    struct Arbol* hijo_derecho;
    struct Arbol* hijo_izquierdo;
}Arbol;

typedef struct {
    Arbol *raiz;
    int contNodos;
    char tipo[100];
}ArbolB;

void Insertar(Arbol ** arbol, int elemento, int nivel);
void Preorden(Arbol* arbol);
void Inorden(Arbol* arbol);
void Postorden(Arbol* arbol);
void Leernodo(Arbol* arbol, int elemento);
char Padre(Arbol* arbol, int elemento);
void Hijo_derecho(Arbol* arbol, int elemento);
void Hijo_izquierdo(Arbol* arbol, int elemento);
void Camino(Arbol* arbol, int elemento);
Arbol* Buscar(Arbol* arbol, int elemento);
Arbol* maximo(Arbol* t);
Arbol* minimo(Arbol* t);
Arbol* borrarNodo(Arbol** nA, int e);
ArbolB* crearSubArbol(Arbol* nodoRaiz);
int insertarNodo(Arbol**nA, Arbol* nuevo);
int modificarNodo(Arbol**nA ,Arbol*a,int e);
void impArbol(Arbol* arbol,int c);

Arbol* crearNodo(int nivel,char e);

#endif