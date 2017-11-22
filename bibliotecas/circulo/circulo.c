#include "circulo.h"

float distanciaEuc(int x1, int y1, int x2, int y2){
    int comp1 = (x1-x2)*(x1-x2);
    int comp2 = (y1-y2)*(y1-y2);
    float d = sqrt(comp1 + comp2);

    return d;
}

float distanciaCirc(int x1, int y1,int r1, int x2, int y2, int r2){
    float d;

    d = distanciaEuc(x1, y1, x2, y2) - r1;
    d -= r2;

    if(d<0) d = 0;

    return d;
}


