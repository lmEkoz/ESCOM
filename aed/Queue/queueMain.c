#include <stdio.h>
#include <stdlib.h>
#include "queue.c"

int main(int argc, char const *argv[]){
    QUEUE Q;
    int optionMenu, e, option = 1;

    do{
        menuQueue();
        scanf("%d", &optionMenu);

        switch (optionMenu){
            case 1:
                Q = createQueue();
                break;
            case 2:
                if(isEmptyQueue(Q) == TRUE)
                    printf("La cola esta vacia\n");
                else
                    printf("La cola no esta vacia\n");
                break;
            case 3:
                printf("El elemento en el frente de la cola es: %d\n", frontQueue(Q));
                break;
            case 4:
                printf("Ingrese el elemento a insertar en la cola: ");
                scanf("%d", &e);
                enqueue(Q, e);
                break;
            case 5:
                printf("El elemento eliminado de la cola es: %d\n", dequeue(Q));
                break;
            case 6:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida\n");
                break;
        }
        printf("Desea continuar? (1 = Si, 0 = No): ");
        scanf("%d", &option);    

    } while (option == TRUE);

    return 0;
}