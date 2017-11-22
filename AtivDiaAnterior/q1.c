#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void libera(char **m, int qtd);
int main(){
    char buffer[500], **m;
    int qtd, i, j;

    printf("Informe quantas strings desejas?");
    scanf("%d", &qtd);

    m = (char **) malloc (qtd * sizeof(char *));

    for(i = 0; i<qtd; i++){
        printf("\nString: ");
        fflush(stdin);
        gets(buffer);
        //+1 por causa do /0
        m[i] = (char *) malloc((strlen(buffer)+1)*sizeof(char));
        strcpy(m[i], buffer);
    }
    for(i = 0; i<qtd; i++){
        for(j = 0; j<qtd; j++){
            if(i == j) continue;
            if(strstr(m[i], m[j])!=NULL) printf("\n[%s] esta em [%s]\n", m[j], m[i]);
        }
    }

    libera(m, qtd);
    return 0;
}
void libera(char **m, int qtd){
    int i;
    for(i = 0; i<qtd; i++)
        free(m[i]);
    }
    free(m);
}
