#include <stdio.h>
#include <math.h>

float distanciaEuc(int x1, int y1, int x2, int y2);
float distanciaCirc(int x1, int y1,int r1, int x2, int y2, int r2);

int main(){
    int x1;
    int y1;
    int x2;
    int y2;
    int r1;
    int r2;

    printf("Circ1: ");
    scanf("%d %d %d", &x1, &y1, &r1);
    printf("\nCirc2: ");
    scanf("%d %d %d", &x2, &y2, &r2);

    printf("\n\nDistancia entre os centros: %f\n", distanciaEuc(x1, y1, x2, y2));
    printf("\n\nDistancia entre os circulos: %f\n", distanciaCirc(x1, y1, r1, x2, y2, r2));
}
float distanciaCirc(int x1, int y1,int r1, int x2, int y2, int r2){
    float d;

    d = distanciaEuc(x1, y1, x2, y2) - r1;
    d -= r2;

    if(d<0) d = 0;

    return d;
}
float distanciaEuc(int x1, int y1, int x2, int y2){
    int comp1 = (x1-x2)*(x1-x2);
    int comp2 = (y1-y2)*(y1-y2);
    float d = sqrt(comp1 + comp2);

    return d;
}
