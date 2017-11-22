#include <stdio.h>
#include <string.h>

int main(){
    char texto[20][10];
    int count;
    int i, j, index, qtd;

    printf("Quantas palavras? ");
    scanf("%d", &qtd);

    for(i = 0; i<qtd; i++){
        scanf("%s", texto[i]);
    }

    for(i=0; i<qtd; i++){
        count = 1;
        for(j = 0; j<qtd; j++){
            if(i==j)continue;
            if((strcmp(texto[i], texto[j]) == 0) && (strcmp(texto[j], " ") != 0) ){
                count++;
                strcpy(texto[j], " ");
                 printf("\n%s :  %d", texto[i], count);
                strcpy(texto[i], " ");
            }
        }


    }
}
