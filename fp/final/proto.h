#define TRUE 1
#define FALSE 0

typedef struct{
    int identificadorDePunto;
    float x;
    float y;
    float modulo;
    float angulo;
}Point;
typedef Point * POINT;

POINT ingresarPuntosAleatoriamente(int tam);
POINT ingresarPuntosManualmente(int tam);

void sumaPuntos(POINT P, int first, int second);
void restaPuntos(POINT P, int first, int second);
void multiplicacionPuntos(POINT P, int first, int second);
void divisionPuntos(POINT P, int first, int second);
void distanciaEntrePuntos(POINT P, int first, int second);
void menorDistanciaEntrePuntos(POINT P, int tam);
void puntoVecinoMasCercano(POINT P, int tam, int p);
void imprimirDetallesPuntos(POINT P, int tam);
void vecinoMasCercanoArchivo(POINT P, int first, int second);
void resultadosDeDistanciaArchivo(POINT P, int first, int second, float menorDistancia);
void graficar(POINT P, int tam);
void imprimirEnArchivo(POINT P, int tam);
void imprimirMenu();
void menu(int optionMenu, int tam);