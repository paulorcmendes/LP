#include <stdio.h>

int main(){
    int i, n, antant = -1, ant = 1, atual;

    printf("Informe o n: ");
    scanf("%d", &n);

    for(i = 1; i<=n; i++){
        atual = antant+ant;
        antant = ant;
        ant = atual;
    }
    printf("%d\n", atual);

    return 0;
}
