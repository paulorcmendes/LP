#include <stdio.h>
#include <string.h>

int main(){
    char msg[200];
    printf("Digite sua mensagem: ");
    gets(msg);
    printf("\n\nMensagem: %s", msg);
    return 0;
}

