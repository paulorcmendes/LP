#include <stdio.h>
#include <string.h>

int main(){
    int i, j, esp, ast, h, qtd;
    scanf("%d", &h);

    //corpo
    for(i=1, qtd = -1; i<= h; i++){
        if(i<=(h+1)/2){
            esp = ((h+1)/2)-i;
            qtd = qtd+2;
        }else{
            esp = i-((h+1)/2);
            qtd = qtd-2;
        }

        for(j=0;j<esp; j++){
            printf(" ");
        }
        for(j=0;j<qtd; j++){
            printf("*");
        }
        printf("\n");

    }

    return 0;
}
