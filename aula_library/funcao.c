#include "funcao.h"
//aqui em cima teria que por o diret�rio do arquivo, como est� na mesma pasta, n�o precisa n� nerd�o.
//<> apenas para caminhos do sistema
void recebe_imprime(char *str1, char *str2){
    print(str1);
    print(str2);
}

void print(char *palavra){
    printf("%s", palavra);
}
