#include <stdio.h>
#include <stdlib.h>

int **alouca(int m, int n);
void libera(int **matriz,int m);

int main(){
    int m, n, **matriz, i, j;
    printf("Linhas e Colunas: ");
    scanf("%d %d", &m, &n);
    matriz = alouca(m, n);
    printf("Elementos: \n");
    for(i = 0; i<m; i++){
        for(j = 0; j<n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i<m; i++){
        printf("\n|");
        for(j = 0; j<n; j++){
            printf(" %d |", matriz[i][j]);
        }
    }
    libera(matriz, m);

    return 0;
}
int **alouca(int m, int n){
    int i, **matriz;

    matriz = (int **) malloc(m * sizeof(int*));
    matriz[0] = (int *) malloc(m * n * sizeof(int));
    for(i = 1; i<m; i++){
        matriz[i] = matriz[i-1]+n;  //<=> (matriz + i) + n
    }
    return matriz;
}
void libera(int **matriz,int m){
    int i;

    for(i = 0; i < m; i++){
        free(matriz[i]);
    }
    free(matriz);
}
