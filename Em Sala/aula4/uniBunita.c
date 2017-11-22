#include <stdio.h>

int main(){
    int v1[4] = {1, 8, 3, 8};
    int v2[4] = {8, 8, 3, 10};

    int uni[8];
    int i, j, n, t1, t2;

    n = 0;
    for(i = 0; i<4; i++){
        t1 = 1;
        t2 = 1;
        for(j = 0; j<n; j++){
            if(v1[i] == uni[j]){
                t1 = 0;
            }
            if(v2[i] == uni[j]){
                t2 = 0;
            }
        }

        if(t1){
            uni[n++] = v1[i];
        }
        if((v1[i] != v2[i]) && t2){
            uni[n++] = v2[i];
        }

    }

    for(i = 0; i<n; i++){
        printf("%d ", uni[i]);
    }


    return 0;
}
