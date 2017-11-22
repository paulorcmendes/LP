#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char **aloca(int size);
int pesquisa(char **vet, char *musica,int size);
int main(){
    char **myVet, buffer[150];
    int size, i;

    printf("Informe quantas musicas ira armazenar: ");
    scanf("%d", &size);

    myVet = aloca(size);
    for(i = 0; i<size; i++){
        system("cls");
        printf("\nMusica %d: ", i+1);
        fflush(stdin);
        gets(buffer);
        if(i == 0){
            myVet[i] = (char *)malloc(sizeof(char)*(strlen(buffer)+1));
            strcpy(myVet[i], buffer);
        }else{
            if(pesquisa(myVet, buffer, i)){
                myVet[i] = (char *)malloc(sizeof(char)*(strlen(buffer)+1));
                strcpy(myVet[i], buffer);
            }else{
                i--;
            }
        }
    }
    mostrar(myVet, size);
    return 0;
}
void mostrar(char **myVet, int size){
    int i = 0;
    system("cls");
    printf("#########Musicas Marotas########");
    for(i = 0; i<size; i++){
        printf("\nMusica %d: %s\n", i+1, myVet[i]);
    }

    printf("\nQualquer tecla para continuar...");
    getche();
}
char **aloca(int size){
    return (char **) malloc(sizeof(char *)*size);
}
int pesquisa(char **vet, char *musica,int size){
    int i, achou = 0, op;

    for(i = 0; i<size; i++){
        if(strcmp(vet[i], musica) == 0){
            achou++;
        }
    }
    if(achou){
        printf("\nA musica ja existe, adicionar mesmo assim?\n 0 - Nao\n 1 - Sim\nOp: ");
        scanf("%d", &op);
        return op;
    }else{
        return 1;
    }
}
