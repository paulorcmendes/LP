#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int qtd, i;
    int *za;

    printf("Quantos valores tu queres? ");
    scanf("%d", &qtd);

    srand(time(NULL));

    do{
        za = (int *) malloc(qtd * sizeof(int));
    }while(za== NULL);

    for(i = 0; i<qtd; i++){
        za[i] = rand();
    }

    for(i = 0; i<qtd; i++){
        printf("\nVet[%d]: %d\n", i, za[i]);
    }

    free(za);
}
