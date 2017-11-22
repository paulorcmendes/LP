#include <stdio.h>
#include <stdlib.h>

typedef struct _contato_{
    char nome[100];
    char telefone[14];
    char email[100];
}contato;

void add(contato *cont);
void print(contato *contatos, int qtd);
contato *clear(contato *contatos, int qtd, int *nQtd);

int main(){
    contato *contatos;
    int qtd = 0, n, op, *nQtd;

    printf("Primeiramente, voce poderia informar o max de contatos: ");
    scanf("%d", &n);
    nQtd = &qtd;
    contatos = (contato *) malloc(sizeof(contato)*n);

    do{
        system("cls");
        printf("1 - Add\n\n2 - Clear\n\n3 - Print\n\n0 - Exit\n\nOp: ");
        scanf("%d", &op);

        switch(op){
            case 1:add(&contatos[qtd]);
                   qtd++;
            break;
            case 2:
                contatos = clear(contatos, qtd, nQtd);
            break;
            case 3:
                print(contatos, qtd);
            break;
            default:
                printf("fssdf");
            break;

        }
    }while(op != 0);

    free(contatos);
}

void add(contato *cont){
    system("cls");
    printf("Informe as informacoes: ");
    scanf("%s %s %s", (*cont).nome, (*cont).telefone, (*cont).email);
    //cont->nome
}
void print(contato *contatos, int qtd){
    int i;
    system("cls");
    for(i = 0; i<qtd; i++){
        printf("\nContato %d:\nNome: %s\nTelefone: %s\nEmail: %s\n", i+1, contatos[i].nome, contatos[i].telefone, contatos[i].email);
    }
    getche();
}

contato *clear(contato *contatos, int qtd, int *nQtd){
    int i, j, max = 0, index = 0;
    contato *n_contatos;
    for(i = 0; i<qtd; i++){
        for(j = i+1; j<qtd; j++){
            if(strcmp(contatos[i].nome, contatos[j].nome) == 0) break;
        }
        if(j == qtd){
            max++;
        }
    }
    *nQtd = max;
    n_contatos = (contato *) malloc(sizeof(contato)*max);

    for(i = 0; i<qtd; i++){
        for(j = i+1; j<qtd; j++){
            if(strcmp(contatos[i].nome, contatos[j].nome) == 0) break;
        }
        if(j == qtd){
            n_contatos[index++] = contatos[i];
        }
    }

    return n_contatos;
}
