#include <stdio.h>
#include <string.h>

int main(){
    int i, j, qtd=-1, espaco;
    int h = 10;
    int pe = 5;
    int base = 8;
    //corpo
    for(i=0; i<h; i++){
        qtd = qtd+2;
        for(j=0;j<h-i-1; j++){
            printf(" ");
        }
        for(j=0;j<qtd; j++){
            printf("X");
        }
        printf("\n");
    }
    //pe
    for(i=0; i<=pe; i++){
        espaco = (qtd/2);
        if(i == pe){
            espaco = espaco-((base-2)/2);
        }
        for(j=0; j<espaco; j++){
           printf(" ");
        }
        if(i == pe){
            for(j=0; j<base; j++){
                printf("X");
            }
        }else{
            printf("XX\n");
        }
    }
    return 0;
}
