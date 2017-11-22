#include <stdio.h>
#include <string.h>

int main(){
    int i, j, valor = 4;
    for(i=0; i<valor; i++){
        printf("C");
        for(j=0;j<valor; j++){
            if(i==0 || i==valor-1){
                printf("C");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
