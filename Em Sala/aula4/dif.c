#include <stdio.h>

int main(){
    int i, j, size;
    int a[4] = {2, 2, 2, 1};
    int b[4] = {6, 4, 5, 3};
    int dif[4];
    size = 0;

    for(i = 0; i<4; i++){
        for(j = 0; j<4; j++){
            if(a[i] == b[j]){
                break;
            }
        }
        if(j == 4){
            for(j = 0; j<size; j++){
                if(a[i] == dif[j]){
                    break;
                }
            }
            if(j == size){
                dif[size++] = a[i];
            }
        }
    }
    printf("Conjunto Diferenca: ");
    for(i = 0; i<size; i++){
        printf("%d ", dif[i]);
    }


    return 0;
}
