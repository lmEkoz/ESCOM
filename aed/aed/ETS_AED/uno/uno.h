#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dato[5][5];
}Cara;

int i, j ,k;

int generarNumero();
void mostrarCara(Cara cara);
Cara sumaCara(Cara cara);
int sumaCol(Cara cara, int col);
int sumaFil(Cara cara, int fil);