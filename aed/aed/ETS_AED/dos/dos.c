#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    Cara cara_1, cara_2 , cara_3, cara_4, cara_5;
    int c1, c2, c3, c4, c5;

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

    printf("\nCara 1");
    c1 = sumaCara(cara_1);
    printf("\nCara 2");
    c2 = sumaCara(cara_2);
    printf("\nCara 3");
    c3 = sumaCara(cara_3);
    printf("\nCara 4");
    c4 = sumaCara(cara_4);
    printf("\nCara 5");
    c5 = sumaCara(cara_5);
    printf("\n");

    printf("Cara 1: %d\n", c1);
    printf("Cara 2: %d\n", c2);
    printf("Cara 3: %d\n", c3);
    printf("Cara 4: %d\n", c4);
    printf("Cara 5: %d\n", c5);

    int total = c1 + c2 + c3 + c4 + c5;
    printf("\nTotal: %d\n", total);

    return 0;
}



