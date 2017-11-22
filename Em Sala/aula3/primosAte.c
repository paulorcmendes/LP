#include <stdio.h>


int main(){
    int n, i, primo = 1, j;

    scanf("%d", &n);

    for(j = 2; j<=n; j++){
        primo = 1;
        for(i = 2; i<=(j/2); i++){
            if(j%i == 0){
                primo = 0;
            }
        }

        if(primo){
            printf("\n%d", j);
        }
    }

    return 0;
}
