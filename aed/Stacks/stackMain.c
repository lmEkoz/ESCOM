#include <stdio.h>
#include <stdlib.h>
#include "stack.c"

int main(int argc, char const *argv[]){
    STACK S;
    int optionMenu, e, option = 1;

    do{
        menuStack();
        scanf("%d", &optionMenu);

        switch (optionMenu){
            case 1:
                S = createStack();
                break;
            case 2:
                if(isEmpty(S) == TRUE)
                    printf("La pila esta vacia\n");
                else
                    printf("La pila no esta vacia\n");
                break;
            case 3:
                printf("El elemento en el tope de la pila es: %d\n", topStack(S));
                break;
            case 4:
                printf("Ingrese el elemento a insertar en la pila: ");
                scanf("%d", &e);
                pushStack(S, e);
                break;
            case 5:
                printf("El elemento eliminado de la pila es: %d\n", popStack(S));
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
