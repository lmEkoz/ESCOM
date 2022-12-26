#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "proto.h"


POINT ingresarPuntosAleatoriamente(int tam){
    POINT points = (POINT)malloc(sizeof(Point)*tam);
    srand(time(NULL));
    for(int i = 0; i < tam; i++){
        points[i].identificadorDePunto = i + 1;
        points[i].x = (rand() % 400) - 200;
        points[i].y = (rand() % 100) - 200;
        points[i].modulo = sqrt(pow(points[i].x, 2) + pow(points[i].y, 2));
        points[i].angulo = atan(points[i].y/points[i].x);
    }
    imprimirEnArchivo(points, tam);
    return points;
}

POINT ingresarPuntosManualmente(int tam){
    POINT points = (POINT)malloc(sizeof(Point)*tam);
    for(int i = 0; i < tam; i++){
        printf("Ingrese el identificador del punto: \n");
        scanf("%d", &points[i].identificadorDePunto);
        printf("Ingrese la coordenada x del punto: \n");
        scanf("%f", &points[i].x);
        printf("Ingrese la coordenada y del punto: \n");
        scanf("%f", &points[i].y);
        points[i].modulo = sqrt(pow(points[i].x, 2) + pow(points[i].y, 2));
        points[i].angulo = atan(points[i].y/points[i].x);
    }
    imprimirEnArchivo(points, tam);
    return points;
}

void sumaPuntos(POINT P, int first, int second){
    float x1 = P[first].x;
    float y1 = P[first].y;
    float x2 = P[second].x;
    float y2 = P[second].y;
    float x3 = x1 + x2;
    float y3 = y1 + y2;

    printf("La suma de los puntos [%.0f, %.0f] + [%.0f, %0.f] es: [%.0f, %.0f]\n", x1, y1, x2, y2, x3, y3);
}

void restaPuntos(POINT P, int first, int second){
    float x1 = P[first].x;
    float y1 = P[first].y;
    float x2 = P[second].x;
    float y2 = P[second].y;
    float x3 = x1 - x2;
    float y3 = y1 - y2;

    printf("La resta de los puntos [%.0f, %.0f] - [%.0f, %0.f] es: [%.0f, %.0f]\n", x1, y1, x2, y2, x3, y3);
}

void multiplicacionPuntos(POINT P, int first, int second){
    float x1 = P[first].x;
    float y1 = P[first].y;
    float x2 = P[second].x;
    float y2 = P[second].y;
    float x3 = x1 * x2;
    float y3 = y1 * y2;

    printf("La multiplicacion de los puntos [%.0f, %.0f] * [%.0f, %0.f] es: [%.0f, %.0f]\n", x1, y1, x2, y2, x3, y3);
}

void divisionPuntos(POINT P, int first, int second){
    float x1 = P[first].x;
    float y1 = P[first].y;
    float x2 = P[second].x;
    float y2 = P[second].y;
    float x3 = x1 / x2;
    float y3 = y1 / y2;

    printf("La division de los puntos [%.0f, %.0f] / [%.0f, %0.f] es: [%.0f, %.0f]\n", x1, y1, x2, y2, x3, y3);
}

void distanciaEntrePuntos(POINT P, int first, int second){
    float x1 = P[first].x;
    float y1 = P[first].y;
    float x2 = P[second].x;
    float y2 = P[second].y;
    float x3 = x1 - x2;
    float y3 = y1 - y2;
    float distancia = sqrt(pow(x3, 2) + pow(y3, 2));

    printf("La distancia entre los puntos [%.0f, %.0f] y [%.0f, %0.f] es: %.0f\n", x1, y1, x2, y2, distancia);
}

void menorDistanciaEntrePuntos(POINT P, int tam){
    float distancia = 0;
    float menorDistancia = 0;
    int first = 0;
    int second = 0;
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(i != j){
                float x1 = P[i].x;
                float y1 = P[i].y;
                float x2 = P[j].x;
                float y2 = P[j].y;
                float x3 = x1 - x2;
                float y3 = y1 - y2;
                distancia = sqrt(pow(x3, 2) + pow(y3, 2));
                if(distancia < menorDistancia){
                    menorDistancia = distancia;
                    first = i;
                    second = j;
                }
            }
        }
    }
    printf("La menor distancia entre los puntos [%.0f, %.0f] y [%.0f, %0.f] es: %.0f\n", P[first].x, P[first].y, P[second].x, P[second].y, menorDistancia);
    resultadosDeDistanciaArchivo(P, first, second, menorDistancia);
}

void puntoVecinoMasCercano(POINT P, int tam, int p){
    float distancia = 0;
    float menorDistancia = 0;
    int first = 0;
    int second = 0;
    for(int i = 0; i < tam; i++){
        if(i != p){
            float x1 = P[p].x;
            float y1 = P[p].y;
            float x2 = P[i].x;
            float y2 = P[i].y;
            float x3 = x1 - x2;
            float y3 = y1 - y2;
            distancia = sqrt(pow(x3, 2) + pow(y3, 2));
            if(distancia < menorDistancia){
                menorDistancia = distancia;
                first = p;
                second = i;
            }
        }
    }
    printf("El punto vecino mas cercano al punto [%.0f, %.0f] es: [%.0f, %.0f]\n", P[first].x, P[first].y, P[second].x, P[second].y);
    vecinoMasCercanoArchivo(P, first, second);    
}

void imprimirDetallesPuntos(POINT P, int tam){
    int option;
    int i, p;

    printf("1. Imprimir todos los puntos\n");
    printf("2. Ingresar punto a imprimir\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &option);

    switch(option){
        case 1:
            for(i = 0; i < tam; i++){
                printf("Punto %d: [%.0f, %.0f]\n", P[i].identificadorDePunto, P[i].x, P[i].y);
                printf("\tModulo: %.2f\n", P[i].modulo);
                printf("\tAngulo: %.2f\n", P[i].angulo);
            }
            break;
        case 2:
            printf("Ingrese el punto a imprimir: ");
            scanf("%d", &p);
            printf("Punto %d: [%.0f, %.0f]\n", P[p].identificadorDePunto, P[p].x, P[p].y);
            printf("\tModulo: %.2f\n", P[p].modulo);
            printf("\tAngulo: %.2f\n", P[p].angulo);
            break;
        default:
            printf("Opcion invalida\n");
            break;
    }
}

void graficar(POINT P, int tam){
    int option;
    int p;
    char graph[400][400];
    int i, j;

    printf("1. Graficar todos los puntos\n");
    printf("2. Ingresar punto a graficar\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &option);

    switch(option){
        case 1:
            for(i = 0; i < 400; i++){
                for(j = 0; j < 400; j++){
                    graph[i][j] = ' ';
                }
            }

            for(i = 0; i < tam; i++){
                graph[199][i] = "|";
            }

            for(i = 0; i < tam; i++){
                graph[i][199] = "-";
            }

            for(i = 0; i < tam; i++){
                graph[(char)P[i].x + 199][(char)P[i].y + 199] = "*";
            }

            for(i = 0; i < 400; i++){
                for(j = 0; j < 400; j++){
                    printf("%c", graph[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            printf("Ingrese el punto a graficar: ");
            scanf("%d", &p);
            for(i = 0; i < 400; i++){
                for(j = 0; j < 400; j++){
                    graph[i][j] = '+';
                }
            }

            for(i = 0; i < tam; i++){
                graph[199][i] = "|";
            }

            for(i = 0; i < tam; i++){
                graph[i][199] = "-";
            }

            graph[(char)P[p].x + 199][(char)P[p].y + 199] = "[+]";

            for(i = 0; i < 400; i++){
                for(j = 0; j < 400; j++){
                    printf("%c", graph[i][j]);
                }
                printf("\n");
            }
            break;
        default:
            printf("Opcion invalida\n");
            break;
    }
}

void imprimirEnArchivo(POINT P, int tam){
    FILE *fp;
    int i;

    fp = fopen("compendioDePuntos.txt", "a");

    for(i = 0; i < tam; i++){
        fprintf(fp, "|\t%d \t|\t%.2f \t|\t%.2f \t|\t%.2f \t|\t%.2f \t|\n", P[i].identificadorDePunto, P[i].x, P[i].y, P[i].modulo, P[i].angulo);
    }
    fprintf(fp, " \n");

    fclose(fp);
}

void imprimirMenu(){
    printf("MENU\n");
    printf("1. Ingresar puntos aleatoriamente\n");
    printf("2. Ingresar puntos manualmente\n");
    printf("3. Ingresar puntos por archivo\n");
    printf("4. Suma puntos \n");
    printf("5. Resta puntos \n");
    printf("6. Multiplicacion puntos \n");
    printf("7. Division puntos \n");
    printf("8. Determinar distancia entre puntos\n");
    printf("9. Determinar la menor distancia entre puntos\n");
    printf("10. Determinar punto vecino mas cercano\n");
    printf("11. Imprimir detalles de puntos\n");
    printf("12. Graficar\n");
    printf("13. Salir \n");
}

void vecinoMasCercanoArchivo(POINT P, int first, int second){
    FILE *fp;

    fp = fopen("vecinoMasCercano.txt", "a");
    fprintf(fp ,"El punto vecino mas cercano al punto [%.0f, %.0f] es: [%.0f, %.0f]\n", P[first].x, P[first].y, P[second].x, P[second].y);

    fclose(fp);
}

void resultadosDeDistanciaArchivo(POINT P, int first, int second, float menorDistancia){
    FILE *fp;

    fp = fopen("resultadosDeDistancia.txt", "a");
    fprintf(fp, "La distancia entre el punto [%.0f, %.0f] y el punto [%.0f, %.0f] es: %.2f\n", P[first].x, P[first].y, P[second].x, P[second].y, menorDistancia);

    fclose(fp);
}