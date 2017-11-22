#include <stdio.h>
#include <string.h>

int main(){
    char msg[200];
    printf("Informe o que voce espera da disciplina e do professor: ");
    gets(msg);
    printf("\n\nMensagem: %s", msg);
    return 0;
}
