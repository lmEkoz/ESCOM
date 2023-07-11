#include <stdio.h>

void torre(int n, char pilarInicial, char pilarFinal, char pilarAux)
{
    if (n == 1)
    {
        printf("Mover dico 1 del pilar %c al pilar %c\n", pilarInicial, pilarFinal);
        return;
    }
    torre(n-1, pilarInicial, pilarAux, pilarFinal);
    printf("Mover disco %d del pilar %c al pilar %c\n", n, pilarInicial, pilarFinal);
    torre(n-1, pilarAux, pilarFinal, pilarInicial);
}

int main()
{
    int n = 3;
    torre(n, 'A', 'C', 'B');
    return 0;
}