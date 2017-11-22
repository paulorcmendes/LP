#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void pesquisaNome(int *vetNum, char **vetNome, int qtd);
void pesquisaNumero(int *vetNum, char **vetNome, int qtd);
int *alocaNum (int size);
char **alocaNome (int size);
int *addNum(int *vetNum, int qtd);
char **addNome(char **vetNome, int qtd);
void limpaNum(int *vetNum);
void limpaNome(char **vetNome, int qtd);
void limpa(int *vetNum, char **vetNome, int qtd);

int main(){
    int *vetNum;
    char **vetNome, buffer[100];
    int qtd = 0, op, min = 1, bufferi, i;

    vetNum = alocaNum(min);
    vetNome = alocaNome(min);
    do{
        system("cls");
        printf("############ Cadastro ###########");
        printf("\n\nNumero do produto: ");
        scanf("%d", &bufferi);
        printf("\nNome: ");
        fflush(stdin);
        gets(buffer);

        if(qtd>=min){
            vetNum = addNum(vetNum, qtd);
            vetNome = addNome(vetNome, qtd);
            vetNum[qtd] = bufferi;
            vetNome[qtd] = (char *) malloc((strlen(buffer)+1)*sizeof(char));
            strcpy(vetNome[qtd], buffer);

        }else{
            vetNum[qtd] = bufferi;
            vetNome[qtd] = (char *) malloc((strlen(buffer)+1)*sizeof(char));
            strcpy(vetNome[qtd], buffer);
        }
        qtd++;
        printf("\n0 - para parar de adicionar: ");
        scanf("%d", &op);
    }while(op!=0);
    /*printf("######## Mostrando as Paradas #######");

    for(i = 0; i<qtd; i++){
        printf("\n%d Num: %d Nome: %s", i+1, vetNum[i], vetNome[i]);
    }*/
    do{
        system("cls");
        printf("#########Pesquisa########");
        printf("\n1 - Pesquisa por numero");
        printf("\n2 - Pesquisa por nome");
        printf("\n0 - sair");
        printf("\nopcao: ");
        scanf("%d", &op);
        if(op == 1){
            pesquisaNumero(vetNum, vetNome, qtd);
        }else if(op == 2){
            pesquisaNome(vetNum, vetNome, qtd);
        }

    }while(op!=0);

    limpa(vetNum, vetNome, qtd);
    return 0;
}
void pesquisaNome(int *vetNum, char **vetNome,int qtd){
    int i, achou = 0;
    char buffer[150], *nome;
    printf("\nInforme o nome: ");
    fflush(stdin);
    gets(buffer);
    nome = (char *) malloc((strlen(buffer)+1)*sizeof(char));
    strcpy(nome, buffer);
    for(i = 0; i<qtd; i++){
        if(strcmp(vetNome[i], nome) == 0){
            printf("\nNumero: %d", vetNum[i]);
            printf("\nNome: %s", vetNome[i]);
            achou++;
        }
    }
    if(achou == 0)printf("\nNao encontrado");
    printf("\nQualquer tecla para continuar: ");
    getche();

}
void pesquisaNumero(int *vetNum, char **vetNome, int qtd){
    int num, i, achou = 0;
    printf("\nInforme o numero: ");
    scanf("%d", &num);

    for(i = 0; i<qtd; i++){
        if(vetNum[i] == num){
            printf("\nNumero: %d", vetNum[i]);
            printf("\nNome: %s", vetNome[i]);
            achou++;
        }
    }
    if(achou == 0)printf("\nNao encontrado");
     printf("\nQualquer tecla para continuar: ");
    getche();
}
int *alocaNum (int size){
    return (int *) malloc(size*sizeof(int));
}
char **alocaNome (int size){
    return (char **) malloc(size*sizeof(char *));
}
int *addNum(int *vetNum, int qtd){
    int *numAux;
    int i;
    numAux = alocaNum(qtd+1);
    for(i = 0; i<qtd; i++){
        numAux[i] = vetNum[i];

    }
    limpaNum(vetNum);
    return numAux;

}
char **addNome(char **vetNome, int qtd){

    char **nomeAux;
    int i;

    nomeAux = alocaNome(qtd+1);

    for(i = 0; i<qtd; i++){

        nomeAux[i] = (char *) malloc((strlen(vetNome[i])+1)*sizeof(char));
        strcpy(nomeAux[i], vetNome[i]);
    }
    limpaNome(vetNome, qtd);
    return nomeAux;

}
void limpaNum(int *vetNum){
    free(vetNum);
}
void limpaNome(char **vetNome, int qtd){
    int i;
    for(i = 0; i<qtd; i++){
        free(vetNome[i]);
    }
    free(vetNome);
}
void limpa(int *vetNum, char **vetNome, int qtd){
    limpaNome(vetNome, qtd);
    limpaNum(vetNum);
}
