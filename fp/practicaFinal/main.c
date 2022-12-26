#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "functions.c"

int main(int argc, char const *argv[]){
    int option = 1, optionMenu;
    int tam;
    int first, second;
    POINT points;

    printf("Ingrese el numero de puntos: \n");
    scanf("%d", &tam);

    do{
        imprimirMenu();
        scanf("%d", &optionMenu);
        switch (optionMenu){
            case 1:
                printf("Ingresar puntos aleatoriamente\n");
                points = ingresarPuntosAleatoriamente(tam);
                break;
            case 2:
                printf("Ingresar puntos manualmente\n");
                points = ingresarPuntosManualmente(tam);
                break;
            case 3:
                printf("Ingresar puntos por archivo\n");
                break;
            case 4:
                printf("Suma puntos \n");
                printf("Ingrese el indice del primer punto: \n");
                scanf("%d", &first);
                printf("Ingrese el indice del segundo punto: \n");
                scanf("%d", &second);
                sumaPuntos(points, first, second);
                break;
            case 5:
                printf("Resta puntos \n");
                printf("Ingrese el indice del primer punto: \n");
                scanf("%d", &first);
                printf("Ingrese el indice del segundo punto: \n");
                scanf("%d", &second);
                restaPuntos(points, first, second);
                break;
            case 6:
                printf("Multiplicacion puntos \n");
                printf("Ingrese el indice del primer punto: \n");
                scanf("%d", &first);
                printf("Ingrese el indice del segundo punto: \n");
                scanf("%d", &second);
                multiplicacionPuntos(points, first, second);
                break;
            case 7:
                printf("Division puntos \n");
                printf("Ingrese el indice del primer punto: \n");
                scanf("%d", &first);
                printf("Ingrese el indice del segundo punto: \n");
                scanf("%d", &second);
                divisionPuntos(points, first, second);
                break;
            case 8:
                printf("Determinar distancia entre puntos\n");
                printf("Ingrese el indice del primer punto: \n");
                scanf("%d", &first);
                printf("Ingrese el indice del segundo punto: \n");
                scanf("%d", &second);
                distanciaEntrePuntos(points, first, second);
                break;
            case 9:
                printf("Determinar la menor distancia entre puntos\n");
                menorDistanciaEntrePuntos(points, tam);
                break;
            case 10:
                printf("Determinar punto vecino mas cercano\n");
                int p;
                printf("Ingrese el indice del punto: \n");
                scanf("%d", &p);
                puntoVecinoMasCercano(points, tam, p);
                break;
            case 11:
                printf("Imprimir detalles de puntos\n");
                imprimirDetallesPuntos(points, tam);
                break;
            case 12:
                printf("Graficar\n");
                graficar(points, tam);
                break;
            case 13:
                printf("Salir\n");
                exit(0);
                break;
            default:
                printf("Opcion no valida\n");
                break;
        }  

        printf("Desea continuar? 1 = Si, 0 = No\n");
        scanf("%d", &option);
    } while (option == TRUE);
    

    return 0;
}

