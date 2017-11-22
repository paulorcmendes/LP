#include <stdio.h>
#include <math.h>

double area(float r);

int main(){
    float raio;

    printf("Informe o raio: ");
    scanf("%f", &raio);
    printf("\n\nA area eh: %f\n", area(raio));
}

double area(float r){
    double area = M_PI * r * r;

    return area;
}
