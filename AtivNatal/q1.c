#include <stdio.h>
#include <string.h>

int main(){
    char word[30];
    int esq, dir;

    printf("Informe a palavra: ");
    fflush(stdin);
    gets(word);

    esq = 0;
    dir = strlen(word) - 1;

    while(word[esq]==word[dir]){
        esq++;
        dir--;

        if(dir<=esq) break;
    }

    if(dir<=esq){
        printf("\n\nEh");
    }else{
        printf("\n\nN eh nao");
    }
    return 0;
}
