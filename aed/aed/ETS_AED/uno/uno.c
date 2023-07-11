#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.c"


int main()
{
    srand(time(NULL));
    Cara cara_1, cara_2 , cara_3, cara_4, cara_5, cara_1_2, cara_2_2 , cara_3_2, cara_4_2, cara_5_2;

    for (i = 0; i < 5; ++i)
    {
        for(j = 0; j < 5; j++)
        {
            cara_1.dato[i][j] = generarNumero();
            cara_2.dato[i][j] = generarNumero();
            cara_3.dato[i][j] = generarNumero();
            cara_4.dato[i][j] = generarNumero();
            cara_5.dato[i][j] = generarNumero();
        }
    }

    mostrarCara(cara_1);
    mostrarCara(cara_2);
    mostrarCara(cara_3);
    mostrarCara(cara_4);
    mostrarCara(cara_5);

    cara_1_2 = sumaCara(cara_1);
    cara_2_2 = sumaCara(cara_2);
    cara_3_2 = sumaCara(cara_3);
    cara_4_2 = sumaCara(cara_4);
    cara_5_2 = sumaCara(cara_5);


    mostrarCara(cara_1_2);
    mostrarCara(cara_2_2);
    mostrarCara(cara_3_2);
    mostrarCara(cara_4_2);
    mostrarCara(cara_5_2);


    return 0;
}
