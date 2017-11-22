#include <stdio.h>


int main(){
    int n, i, primo = 1;
    scanf("%d", &n);
    for(i = 2; i<=(n/2); i++){
        if(n%i == 0){
            primo = 0;
            break;
        }
    }
    if(primo && n!=1){
        printf("E ae primo");
    }else{
        printf("Aqui eh so familia");
    }
}
