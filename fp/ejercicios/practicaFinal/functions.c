#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "proto.h"

POINT crearPunto(){
    POINT P;
    P.identificadorDePunto = 0;
    P.x = 0;
    P.y = 0;
    P.modulo = 0;
    P.angulo = 0;
    return P;
}

void generarPuntosAleatoriamente(int tam){
    int i;
    for(i=0; i<tam; i++){
        
    }
}

void generarPuntosManualmente(int tam){
    POINT P = crearPunto();
    int i;
    for(i=0; i<tam; i++){
        printf("Ingrese x para x%d: \n", i + 1);
        scanf("%f", &P.x);
        printf("Ingrese y para y%d: \n", i + 1);
        scanf("%f", &P.y);
        pA[i] = P;

    }
}

void IngresarPuntoFichero(PointArr ){
    FILE f;
    f = fopen("compendioDePunros.txt", "w");
    if(f == NULL){
        printf("Error al abrir el fichero");
        exit(1);
    }
    fprintf(f, "| %d | %.2f | %.2f | %.2f | %.2f |",POINT.identificadorDePunto, POINT.x, POINT.y, POINT.modulo, POINT.angulo);
    fprintf(f, "|----|----|----|----|----|");
    fclose(f);
}