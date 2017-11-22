#include <stdio.h>

int main(){
    int n, i, menor, atual;

    printf("Quantos numeros vais informar: ");
    scanf("%d", &n);

    for(i = 0;i<n; i++){
        scanf("%d", &atual);
        if(i==0){
            menor = atual;
        }else{
            if(atual<menor){
                menor = atual;
            }
        }
    }
    printf("O menor eh: %d", menor);
    return 0;
}

