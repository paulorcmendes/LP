#include <stdio.h>

typedef struct _contato_{
    char nome[100];
    char telefone[14];
    char email[100];
}contato;

int main(){
    contato *vetor;

    int i, n;
    printf("Qtd: ");
    scanf("%d", &n);

    vetor = (contato *) malloc(sizeof(contato)*n);

    for(i = 0; i<n; i++){
        scanf("%s %s %s", vetor[i].nome, vetor[i].telefone, vetor[i].email);
    }

    for(i = 0; i<n; i++){
        printf("\nContato %d:\nNome: %s\nTelefone: %s\nEmail: %s\n", i+1, vetor[i].nome, vetor[i].telefone, vetor[i].email);
    }

    free(vetor);
}
