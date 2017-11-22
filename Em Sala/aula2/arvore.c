#include <stdio.h>

int main(){
    int h;
    int i, j, k;

    scanf("%d", &h);
    for(i = 0; i<h; i++){
        for(k = 0; k<=((h-i)/2); k++){
            if((h-i)%2 == 0 && k == ((h-i)/2)){
                printf(" ");
            }else{
                printf("  ");
            }
        }
        for(j = 0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
