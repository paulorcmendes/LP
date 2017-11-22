#include <stdio.h>

int main(){
    int a, b, c, i;

    scanf("%d %d %d", &a, &b, &c);

    for(i = 0; i<((a+b)*c); i++){
        if((i%(a+b))<a){
            printf("*");
        }else{
            printf(" ");
        }
    }
    return 0;
}
