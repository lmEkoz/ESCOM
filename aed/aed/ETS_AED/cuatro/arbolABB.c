#include <stdio.h>
#include <stdlib.h>
#include "arbol.c"

int main(){
    int arr[31] = {12,4,5,52,89,74,63,67,90,33,56,78,70,11,1,32,35,88,20,15,100,130,150,200,250,300,350,400,450,500,550};

    Arbol *arbol;
    Arbol *temporal;
    ArbolB* subarbol;
    char elemento;
    int val;
    char e , n , sub;
    int opcion, nivel = 1;
    arbol = NULL;

    for (int i = 0; i < 31; i++)
    {
        Insertar(&arbol, arr[i], nivel);
        impArbol(arbol,0);
        printf("\n");
    }

    return 0;
}