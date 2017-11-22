#include "bolao.h"

int opcaoUsuario(){
    int op;
    system("cls");
    printf("####################BOLAO DO GERALDAO##################");
    printf("\n\n-Digite:");
    printf("\n\n1 - Gerar uma aposta comum");
    printf("\n\n2 - Gerar apostas personalizadas");
    printf("\n\n3 - SAIR");
    printf("\n\nSua opcao: ");
    scanf("%d", &op);

    return op;
}
int verificaRepetido(int *vetRepet, int index, int numero, int maxRepet, int qtdDezenas){
    int i;
    int repetidos = 0;
    int d1, d2;
    for(i = 0; i<index; i++){
        if(numero == vetRepet[i]){
            d1 = (float)i/qtdDezenas;
            d2 = (float)index/qtdDezenas;
            //Garantir que não vão ter números repetidos na mesma aposta
            if(d1 == d2){
                return 1;
            }
            repetidos++;
        }
    }
    if(repetidos > maxRepet){
        return 1;
    }else{
        return 0;
    }
}
void apostaComum(){
    aposta(1, 6, 0);
}

void aposta(int qtdApostas, int qtdDezenas, int maxRepeticoes){
    int limite = qtdDezenas*qtdApostas;
    int vetRepet[limite];
    int index = 0;
    int i, j;
    int sort;
    system("cls");
    //printf("%d", );
    printf("#######################APOSTAS####################");
    for(i = 0; i<qtdApostas; i++){
        printf("\n\nAposta numero %d:", i+1);
        for(j = 0; j<qtdDezenas; j++){
            //Testando se ainda é possível concluir a aposta com as condições dadas
            if(((i*qtdDezenas)+(j+1))>(MAIOR_NUMERO*(maxRepeticoes+1))){
                printf(" Impossivel Finalizar Aposta!\n");
                break;
            }
            sort = (rand()%MAIOR_NUMERO)+1;
            while(verificaRepetido(vetRepet, index, sort, maxRepeticoes, qtdDezenas)){
                sort = (rand()%MAIOR_NUMERO)+1;
            }
            printf(" (%d) ", sort);
            vetRepet[index++] = sort;
        }
    }
    printf("\n\nPressione qualquer tecla para continuar... ");
    fflush(stdin);
    getche();
}
void apostaPersonalizada(){
    int qtdApostas, qtdDezenas, maxRepeticoes;
    system("cls");
    printf("#############APOSTA PERSONALIZADA#############");
    printf("\n\nInforme quantas apostas: ");
    scanf("%d", &qtdApostas);
    printf("\n\nInforme qtd dezenas: ");
    scanf("%d", &qtdDezenas);
    printf("\n\nInforme qtd max de repeticoes: ");
    scanf("%d", &maxRepeticoes);

    if(qtdDezenas<=MAIOR_NUMERO){
        aposta(qtdApostas, qtdDezenas, maxRepeticoes);
    }else{
        printf("\nERRO! A aposta nao sera realizada pois a quantidade de dezenas por aposta excede o disponivel");
        printf("\nQualquer tecla para continuar...");
        fflush(stdin);
        getche();
        apostaPersonalizada();
    }
}
void nenhumaOpcao(){
    printf("\n\nOpcao invalida! Qualquer tecla para continar... ");
    fflush(stdin);
    getche();
}
