#include <stdio.h>

int main(){
    int vet[21] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};
    int esq, dir, aux, i;

    esq = 0;
    dir = 20;

    while(esq <= dir){
        aux = vet[esq];
        vet[esq] = vet[dir];
        vet[dir] = aux;
        esq++;
        dir--;
    }

    for(i = 0; i<21; i++){
        printf("%d ", vet[i]);
    }
}
