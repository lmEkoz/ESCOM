#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "stack.c"

int main() {
    char cadena[15] = "623+-382/+*2^3+";
    char c;
    STACK stack1;
    stack1 = createStack();
    int e;

    for(int i = 0; i < 15; i++)
    {
        if (isdigit(cadena[i])){
            c = cadena[i];
            e = atoi(&c);
            e -= 623;
            e /= 1000;
            pushStack(stack1, e);
        }else {
            operar(stack1, cadena[i]);
        }
    }

    printf("Resultado = %d", popStack(stack1));

    free(stack1);

    return 0;
}



