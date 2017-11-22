#include "circulo.h"

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
