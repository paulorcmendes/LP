#include <stdio.h>
#include <string.h>

int main(){
    char texto[20][10], entrada[200];
    int i, index1, index2, count, j;

    index1 = 0;
    index2 = 0;

    gets(entrada);

    for(i = 0; i<=strlen(entrada); i++){
        if(entrada[i] == ' ' || i == strlen(entrada)){
            texto[index1][index2] = '\0';
            index1++;
            index2 = 0;
        }else{
            texto[index1][index2++] = entrada[i];
        }
    }

    for(i = 0; i<index1; i++){
        count = 0;
        for(j = 0; j<index1; j++){
            if(strcmp(texto[i], texto[j]) == 0){
                if(j<i) break;
                count++;

            }
        }
        if(count != 0){
         printf("\n%s : %d", texto[i], count);
        }
    }

}
