#include <stdio.h>

int main(){
    int v1[4] = {8, 8, 2, 7};
    int v2[4] = {8, 6, 2, 8};

    int inter[4];
    int i, j, k, n;
    n = 0;
    for(i = 0; i<4; i++){
        for(j = 0; j<4; j++){
            if(v1[i] == v2[j]){
                for(k = 0; k<n; k++){
                    if(v1[i] == inter[k]){
                        break;
                    }
                }
                if(k == n){
                    inter[n++] = v1[i];
                }
            }
        }
    }
    printf("Conjunto Inter: ");
    for(i = 0; i<n; i++){
        printf("%d ", inter[i]);
    }


    return 0;
}
