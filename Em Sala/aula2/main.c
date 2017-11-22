#include <stdio.h>

int main(){
    int a, b, c;
    int i, j, k;

    scanf("%d %d %d", &a, &b, &c);

    for(i=0; i<c; i++){
        for(j = 0; j<a; j++){
            printf("*");
        }
        for(k = 0; k<b; k++){
            printf(" ");
        }
    }


    return 0;
}
