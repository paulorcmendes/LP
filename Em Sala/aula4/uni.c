#include <stdio.h>

int main(){
    int v1[4] = {1, 3, 8, 8};
    int v2[4] = {8, 7, 5, 7};

    int uni[8];
    int i, j, n;
    n = 0;
    for(i = 0; i<4; i++){
        for(j = 0; j<n; j++){
            if(v1[i] == uni[j]){
                break;
            }
        }
        if(j == n){
            uni[n++] = v1[i];
        }
    }
    for(i = 0; i<4; i++){
        for(j = 0; j<n; j++){
            if(v2[i] == uni[j]){
                break;
            }
        }
        if(j == n){
            uni[n++] = v2[i];
        }
    }
    printf("Conjunto Uniao: ");
    for(i = 0; i<n; i++){
        printf("%d ", uni[i]);
    }


    return 0;
}
