#ifndef _proto_
#define _proto_


typedef struct{
    int identificadorDePunto;
    float x;
    float y;
    float modulo;
    float angulo;
}Point;
typedef Point * POINT;

typedef struct{
    POINT puntos[100];
}PointArr;

void generarPuntosAleatoriamente(int tam);
void generarPuntosManualmente(int tam);

#endif