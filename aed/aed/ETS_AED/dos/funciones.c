#include <stdio.h>
#include <stdlib.h>
#include "dos.h"

int generarNumero()
{
    return rand() % 101;
}

void mostrarCara(Cara cara)
{
    printf("Y  X\t");

    for (i = 0; i < 5; i++)
    {
        printf("[%d]\t", i + 1);
    }
    printf("\n");


    for (i = 0; i < 5; ++i)
    {
        printf("[%d]\t", i + 1);
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", cara.dato[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int sumaCara(Cara cara)
{
    int suma = 0;
    int col[5];

    for (i = 0; i < 5; i++)
    {
        col[i] = sumaCol(cara, i);
        suma += col[i];
    }

    return suma;
}

int sumaCol(Cara cara, int col)
{
    int suma = 0;
    for (j = 0; j < 5; j++) //col
    {
        suma += cara.dato[j][col];
    }
    printf("\nSuma col %d: %d\n",col, suma);
    return suma;
}