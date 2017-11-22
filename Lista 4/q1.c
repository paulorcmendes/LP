#include <stdio.h>

int main(){
    int n, i, par=1, impar=1;

    printf("Informe o n: ");
    scanf("%d", &n);

    for(i = 1;i<=n; i++){
        if(i%2==0){
            par = par*i;
        }else{
            impar = impar*i;
        }
    }
    printf("Produto par: %d\nProduto impar: %d", par, impar);
    return 0;
}

