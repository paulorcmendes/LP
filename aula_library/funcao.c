#include "funcao.h"
//aqui em cima teria que por o diretório do arquivo, como está na mesma pasta, não precisa né nerdão.
//<> apenas para caminhos do sistema
void recebe_imprime(char *str1, char *str2){
    print(str1);
    print(str2);
}

void print(char *palavra){
    printf("%s", palavra);
}
