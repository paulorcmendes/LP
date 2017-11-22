#include <stdio.h>
#include <stdlib.h>

int *alouca(int n);
void print(int *vet, int n);
void libera(int *willy);

int main(){
    int n, *vet, i;
    printf("Quantos valores, nerdao: ");
    scanf("%d", &n);
    vet = alouca(n);
    printf("Informe os valores: ");
    for(i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    print(vet, n);
    libera(vet);

    return 0;
}
int * alouca(int n){
    int *vet;
    vet = (int *) malloc(n*sizeof(int));
    return vet;
}
void print(int *vet, int n){
    int i;
    printf("vetor: ");
    for(i = 0; i<n; i++){
        printf("[%d] ", vet[i]);
    }
}
void libera(int *willy){
    free(willy);
}

