#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

void Insertar(Arbol ** arbol, int elemento, int nivel){
    Arbol *temporal = NULL;
    if(!(*arbol)){
        temporal = (Arbol *)malloc(sizeof(Arbol));
        temporal->hijo_izquierdo = temporal->hijo_derecho = NULL;
        temporal->elemento = elemento;
        temporal->nivel = nivel;
        (*arbol) = temporal;
        return;
    }

    if(elemento < (*arbol)->elemento){
        nivel++;
        Insertar(&(*arbol)->hijo_izquierdo, elemento, nivel);
    }
    else if(elemento > (*arbol)->elemento){
        nivel++;
        Insertar(&(*arbol)->hijo_derecho, elemento, nivel);
    }
    else if(elemento == (*arbol)->elemento)
        return;
}


void Preorden(Arbol* arbol){
    if(arbol){
        printf("%d ",arbol->elemento);
        Preorden(arbol->hijo_izquierdo);
        Preorden(arbol->hijo_derecho);
    }
}


int ContaNodos(Arbol* arbol,int contador){
    if(arbol){
        contador++;
        contador=ContaNodos(arbol->hijo_izquierdo,contador);
        contador=ContaNodos(arbol->hijo_derecho,contador);
    }
    return contador;
}


void Alturas(Arbol* arbol){
    if(arbol){
        printf("ELEMENTO: %d\n",arbol->elemento);
        printf("ALTURA: %d\n", (arbol->nivel)-1 );
        printf("Nivel:  %d\n", arbol->nivel );
        Alturas(arbol->hijo_izquierdo);
        Alturas(arbol->hijo_derecho);
    }
}


void Inorden(Arbol* arbol){
    if(arbol){
        Inorden(arbol->hijo_izquierdo);
        printf("%d ",arbol->elemento);
        Inorden(arbol->hijo_derecho);
    }
}


void Postorden(Arbol* arbol){
    if(arbol){
        Postorden(arbol->hijo_izquierdo);
        Postorden(arbol->hijo_derecho);
        printf("%d ",arbol->elemento);
    }
}

char Padre(Arbol* arbol, int elemento){
   int aux = 0;
    int x;
    do{
        if(elemento < arbol->elemento){
            aux = arbol->elemento;
            arbol = arbol->hijo_izquierdo, elemento;
        }
        else if(elemento > arbol->elemento){
            aux = arbol->elemento;
            arbol = arbol->hijo_derecho;
        }
        else if(elemento == arbol->elemento)
            return x=(int)aux;
    }while(arbol);
}

void Hijo_derecho(Arbol* arbol, int elemento){
    if(elemento < arbol->elemento)
        Hijo_derecho(arbol->hijo_izquierdo, elemento);
    else if(elemento > arbol->elemento)
        Hijo_derecho(arbol->hijo_derecho, elemento);
    else if(elemento == arbol->elemento)
        if(arbol->hijo_derecho == NULL)
            printf("\nHIJO DERECHO: (null)");
        else
            printf("\nHIJO DERECHO: %d", arbol->hijo_derecho->elemento);
}

void Hijo_izquierdo(Arbol* arbol, int elemento){
    if(elemento < arbol->elemento)
        Hijo_izquierdo(arbol->hijo_izquierdo, elemento);
    else if(elemento > arbol->elemento)
        Hijo_izquierdo(arbol->hijo_derecho, elemento);
    else if(elemento == arbol->elemento)
        if(arbol->hijo_izquierdo == NULL)
            printf("\nHIJO IZQUIERDO: (null)");
        else
            printf("\nHIJO IZQUIERDO: %d", arbol->hijo_izquierdo->elemento);
}

void Camino(Arbol* arbol, int elemento){
    if(elemento < arbol->elemento){
        printf("%d", arbol->elemento);
        Camino(arbol->hijo_izquierdo, elemento);
    }
    else if(elemento > arbol->elemento){
        printf("%d", arbol->elemento);
        Camino(arbol->hijo_derecho, elemento);
    }
    else if(elemento == arbol->elemento)
        printf("%d", arbol->elemento);
}

Arbol* Buscar(Arbol* arbol, int elemento){
    if(!arbol)
        return NULL;
    if(elemento < arbol->elemento)
        Buscar(arbol->hijo_izquierdo, elemento);
    else if(elemento > arbol->elemento)
        Buscar(arbol->hijo_derecho, elemento);
    else if(elemento == arbol->elemento)
        return arbol;
}

void Leernodo(Arbol* arbol, int elemento){
    if(elemento < arbol->elemento)
        Leernodo(arbol->hijo_izquierdo, elemento);
    else if(elemento > arbol->elemento)
        Leernodo(arbol->hijo_derecho, elemento);
    else if(elemento == arbol->elemento){
        Hijo_izquierdo(arbol, elemento);
        Hijo_derecho(arbol, elemento);
    }
}

int altura (Arbol *arbol , int nivel) {
    if(!arbol)
        return 0;
    else {
        int alturaI;
        int alturaD;

        alturaI = altura (arbol -> hijo_izquierdo,nivel);
        alturaD = altura (arbol -> hijo_derecho,nivel);

        if(alturaI > alturaD)
            return alturaI + 1;
        else
            return alturaD + 1;
    }
}

Arbol* maximo(Arbol* t){
    if(t==NULL){
        printf("Arbol vacio \n");
        return NULL;
    }
    if(t->hijo_derecho==NULL){
        return t;
    }
    return maximo(t->hijo_derecho);
}

Arbol* minimo(Arbol* t){
    if(t==NULL){
        printf("Arbol vacio \n");
        return NULL;
    }
    if(t->hijo_izquierdo==NULL){
        return t;
    }
    return minimo(t->hijo_izquierdo);
}

Arbol* borrarNodo(Arbol** arbol, int e){
    Arbol* aux, **min, *aux2 , *aux3;
    if((*arbol)->elemento==e){
        aux=(*arbol);
        if((*arbol)->hijo_derecho != NULL ){
            aux3 = minimo(((*arbol)->hijo_derecho));
            min = &aux3;
            aux2 = *min;
            (*min) = (*min)->hijo_derecho;
            aux2->hijo_izquierdo = aux->hijo_izquierdo;
            aux2->hijo_derecho = aux->hijo_derecho;
            *arbol = aux2;
        }
        else{
            (*arbol) = (*arbol)->hijo_izquierdo;
            free(aux);
            return *arbol;
        }
    }

    if(e<(*arbol)->elemento){
        (*arbol)->hijo_izquierdo = borrarNodo(&((*arbol)->hijo_izquierdo),e);
    }else{
        (*arbol)->hijo_derecho = borrarNodo(&((*arbol)->hijo_derecho),e);
    }
    return *arbol;
}

ArbolB* crearSubArbol(Arbol* nodoRaiz){
    ArbolB *arbol=NULL;
    arbol=(ArbolB *)malloc(sizeof(ArbolB));
    arbol->raiz=nodoRaiz;
    arbol->contNodos=1;
    //arbol->tipo=NULL;
    return arbol;
}

int insertarNodo(Arbol**nA, Arbol* nuevo){
    if ((*nA)==NULL){
        (*nA)==nuevo;
        return 1;
    }
    if(nuevo->elemento==(*nA)->elemento){
        printf("El nodo ya existe. \n");
        return -1;
    }

    if(nuevo->elemento < (*nA)->elemento){
        return insertarNodo(&((*nA)->hijo_izquierdo),nuevo);
    }else{
        return insertarNodo(&((*nA)->hijo_derecho),nuevo);
    }


}

int modificarNodo(Arbol**nA ,Arbol*a,int e){
    if((*nA)==NULL){
        printf("Arbol vacio\n");
        return 0;
    }
    if((*nA)->elemento == e){
        printf("El elemento ya existe en otro nodo\n");
        return 0;
    }
    if (a->elemento ==(*nA)->elemento)  {
        (*nA)->elemento=e;
        return 1;
    }

    if(e<(*nA)->elemento){
        return modificarNodo(&((*nA)->hijo_izquierdo),a,e);
    }else{
        return modificarNodo(&((*nA)->hijo_derecho),a,e);
    }


}

int tipo(Arbol* raiz, Arbol*nodo){
    if(raiz->elemento == nodo->elemento){
        return 1;
    }

    if(nodo->hijo_izquierdo ==NULL && nodo->hijo_derecho==NULL){
        return 2;
    }else{
        return 3;
    }

}

void impArbol(Arbol* arbol,int c){
    if (arbol == NULL){
        return;
    } else {
        impArbol(arbol->hijo_derecho, c + 1);
        for(int i = 0; i < c; i++){
            printf("   ");
        }
        printf("%d\n", arbol->elemento);
        impArbol(arbol->hijo_izquierdo, c + 1);
    }
}


Arbol* crearNodo(int nivel,char e){
    Arbol *temporal = NULL;
    temporal = (Arbol *)malloc(sizeof(Arbol));
    temporal->hijo_izquierdo = NULL;
    temporal->hijo_derecho = NULL;
    temporal->elemento = e;
    temporal->nivel = nivel;
    return temporal;
}