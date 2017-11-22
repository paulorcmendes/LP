#include <stdio.h>

int main(){
    int i, n, t = 0;
    scanf("%d", &n);

    for(i = 1; i<=(n/2); i++){
        if((i*i)==n){
            t = 1;
            break;
        }
    }
    if(t == 1){
        printf("tem: %d", i);
    }else{
        printf("nao tem");
    }

    return 0;
}
