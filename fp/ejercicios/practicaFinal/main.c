#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

int main(int argc, char const *argv[]){
    int option = 1, optionMenu;
    do{
        printf("MENU\n");
        printf("1. Generar lista de puntos aletoriamente\n");
        printf("2. Generar lista de puntos manualmente\n");
        printf("3. Obtener puntos de archivo\n");
        printf("4. Sumar puntos\n");
        printf("5. Restar puntos\n");
        printf("6. Multiplica puntos\n");
        printf("7. Dividir puntos\n");
        printf("8. Determinar distancia entre puntos\n");
        printf("9. Determinar menos distancia entre puntos\n");
        printf("10. Determinar punto vecino mas cercano\n");
        printf("11. Imprime detalles de puntos\n");
        printf("12. Grafica puntos\n");
        printf("13. Salir\n");
        printf("Opcion: ");
        scanf("%d", &optionMenu);

        switch (optionMenu)
        {
        case 1:
            printf("Generar lista de puntos aletoriamente\n");
            printf("Cuantos puntos desea crear?\n");
            int tam;
            scanf("%d", &tam);
            generarPuntosAleatoriamente(tam);
            break;
        case 2:
            printf("Generar lista de puntos manualmente\n");
            printf("Cuantos puntos desea crear?\n");
            int tam;
            scanf("%d", &tam);
            generarPuntosManualmente(tam);
            break;
        case 3:
            printf("Obtener puntos de archivo\n");
            break;
        case 4:
            printf("Sumar puntos\n");
            break;
        case 5:
            printf("Restar puntos\n");
            break;
        case 6:
            printf("Multiplica puntos\n");
            break;
        case 7:
            printf("Dividir puntos\n");
            break;
        case 8:
            printf("Determinar distancia entre puntos\n");
            break;
        case 9:
            printf("Determinar menos distancia entre puntos\n");
            break;
        case 10:
            printf("Determinar punto vecino mas cercano\n");
            break;
        case 11:
            printf("Imprime detalles de puntos\n");
            break;
        case 12:
            printf("Grafica puntos\n");
            break;
        case 13:
            printf("Salir\n");
            exit(0);
            break;
        default:
            break;
        }
    }while(option == 1);
    return 0;
}
