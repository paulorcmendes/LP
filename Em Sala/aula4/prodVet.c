#include <stdio.h>

int main(){
    float vet1[3], vet2[3], prod;
    char i;
    prod = 0;

    printf("Vetor 1: ");
    scanf("%f %f %f", &vet1[0], &vet1[1], &vet1[2]);
    printf("Vetor 2: ");
    scanf("%f %f %f", &vet2[0], &vet2[1], &vet2[2]);

    for(i=0; i<3; i++){
        prod += vet1[i]*vet2[i];
    }
    printf("<vet1, vet2> = %.2f", prod);

    return 0;
}
