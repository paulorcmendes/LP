#include <stdio.h>

int main(){
    int antant=-1, ant=1, n;

    printf("Informe o n: ");
    scanf("%d", &n);

    while(n!=0){
        printf("\n%d", antant+ant);
        ant = antant+ant;
        antant = ant-antant;
        n--;
    }

    return 0;
}
