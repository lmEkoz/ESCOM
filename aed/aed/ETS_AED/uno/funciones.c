#include <stdio.h>
#include <stdlib.h>
#include "uno.h"

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

Cara sumaCara(Cara cara)
{
    Cara caraReturn;
    int fil[5], col[5];

    printf("Columnas\n");
    for (i = 0; i < 5; i++)
    {
        col[i] = sumaCol(cara, i);
        printf("%d\n", col[i]);
    }

    printf("\n");

    printf("Filas\n");
    for (i = 0; i < 5; i++)
    {
        fil[i] = sumaFil(cara, i);
        printf("%d\n", fil[i]);
    }

    printf("\n");

    for (int l = 0; l < 5; ++l) {
        for (int m = 0; m < 5; ++m) {
            caraReturn.dato[l][m]= col[l] + fil[m];
        }
    }

    printf("\n");
    return caraReturn;
}

int sumaCol(Cara cara, int col)
{
    int suma = 0;
    for (j = 1; j < 5; j++) //col
    {
        suma += cara.dato[j][col];
        printf("%d, %d: ", j, col);
        printf("%d\t", cara.dato[j][col]);
    }
    printf("\nSuma: %d", suma);
    printf("\n");
    return suma;
}

int sumaFil(Cara cara, int fil)
{
    int suma = 0;
    for (j = 0; j < 5; j++) //fil
    {
        suma += cara.dato[fil][j];
        printf("%d, %d: ", fil, j);
        printf("%d \t", cara.dato[fil][j]);
    }
    printf("\nSuma: %d", suma);
    printf("\n");
    return suma;
}