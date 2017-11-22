#include <stdio.h>
#include <stdlib.h>

int *aloca (int m, int n);
void imprimeAi(int *vet,int m, int n, int c1, int c2);
void libera(int *willy);

int main(){
    int *vet;
    int m, n, i, j, c1, c2;

    printf("Quantas linhas e qntas colunas: ");
    scanf("%d %d", &m, &n);

    vet = aloca(m, n);
    printf("Informe os valores: \n");
    for(i = 0; i<m; i++){
        for(j = 0; j<n; j++){
            scanf("%d", &vet[(i*n)+j]);
        }
    }

    while(1){
        printf("\nPara sair m[-1][-1]\nInforme o elemento a ser recuperado: ");
        scanf("((%d %d))", &c1, &c2);
        if(c1==-1 && c2 == -1) break;
        imprimeAi(vet, m, n, c1, c2);
    }
    libera(vet);
    return 0;
}
int *aloca (int m, int n){
    return (int *) malloc(m*n*sizeof(int));
}
void imprimeAi(int *vet,int m, int n, int c1, int c2){

    printf("m[%d][%d] = %d", c1, c2, vet[(c1*n)+c2]);

}
void libera(int *willy){
    free(willy);
}
