#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]){
    int n;
    printf("Ingrese la cantidad de elementos del arreglo: \n");
    scanf("%d", &n);

    int *arreglo = (int *)calloc(n, sizeof(int));
    
    srand(time(NULL));
    
    for (int i = 0; i < n; i++){
        arreglo[i] = (rand() % 1000) - 1000;
    }
    int *arrelgo1 = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        if(arreglo[i] % 2 == 0){
            arrelgo1[i] = arreglo[i];
        }
    }

    for (int i = 0; i < n; i++){
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%d ", arrelgo1[i]);
    }
    printf("\n");
    
    return 0;
}
