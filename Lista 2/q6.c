#include <stdio.h>
#include <string.h>

int main(){
    int i, j, valor = 5;
    for(i=0; i<valor; i++){
        printf("X");
        for(j=0;j<valor-2; j++){
            if(i==0 || i==valor-1){
                printf("X");
            }else{
                printf(" ");
            }
        }
        printf("X\n");
    }
    return 0;
}
