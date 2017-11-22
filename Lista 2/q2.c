#include <stdio.h>
#include <string.h>

int main(){
    char nome[30], endereco[30], cep[30];

    printf("Nome :");
    gets(&nome);
    printf("Endereco :");
    gets(&endereco);
    printf("CEP :");
    gets(&cep);
    printf("\n\n%s\n%s\n%s", nome, endereco, cep);

    return 0;
}

