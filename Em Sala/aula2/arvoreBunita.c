#include <stdio.h>

int main(){
    int h;
    int i, j, k, space;

    scanf("%d", &h);
    space = h;
    for(i = 0; i<h; i++){
        for(k = 1; k<space; k++){
            printf(" ");
        }
        for(j = 0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
        space--;
    }

    return 0;
}
