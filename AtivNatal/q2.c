#include <stdio.h>
#include <string.h>

//Essa função apenas conta qual é a a ocorrênci da palavra antes da frase para que possa ser dito:
//depois do terceiro "do": do blá blá  blá
char* contPalavra(char entrada[], char palavra[]){
    char texto[20][10];
    int i, index1, index2, count, j;

    index1 = 0;
    index2 = 0;
    //puts(entrada);
    for(i = 0; i<=strlen(entrada); i++){
        if(entrada[i] == ' ' || i == strlen(entrada) || entrada[i] == '\0'){
            texto[index1][index2] = '\0';
            index1++;
            index2 = 0;
        }else{
            texto[index1][index2++] = entrada[i];
        }
    }
    count = 0;
    for(i = 0; i<index1; i++){
        if(strcmp(palavra, texto[i]) == 0){
            count++;
        }
    }

    switch(count){
    case 1:
        return "primeiro";
    case 2:
        return "segundo";
    case 3:
        return "terceiro";
    case 4:
        return "quarto";
    case 5:
        return "quinto";
    default:
        return "qualquer um";
    }
}

int main(){
    char texto[300];
    char frase[100];
    char *pos, aux, *esp;
    int i, letDepois;

    pos = texto;
    gets(texto);
    gets(frase);

    while(1){
       pos = strstr(pos, frase);
       if(pos == NULL) break;
       aux = pos[-1];
       letDepois = pos[strlen(frase)];
       pos[-1] = '\0';
       pos[strlen(frase)] = '\0';
       esp = texto;
        i = 0;
       while(texto[i] != '\0'){
        if(texto[i] == ' '){
            esp = &texto[i+1];
        }
        i++;
       }


       printf("\n\ndepois do %s [%s]", contPalavra(texto, esp),  esp);
       pos[-1] = aux;
       printf(": %s", esp);
       pos[strlen(frase)] = letDepois;
       pos = pos+strlen(frase);
    }

    return 0;
}
