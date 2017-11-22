#include <stdio.h>


int main(){
    int n1, n2, resto, menor, aux;

     scanf("%d %d", &n1, &n2);

        if(n1<n2){
             menor = n1;
             resto = n2%n1;
        }else{
             menor = n2;
             resto = n1%n2;
        }
     while(!(menor%resto ==0)){
        aux = resto;
        menor = menor%resto;
        menor = aux;

     }
     printf("mdc: %d", menor);
}
