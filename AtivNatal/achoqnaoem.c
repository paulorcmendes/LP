#include <stdio.h>
#include <string.h>

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
char* find(char texto[],char frase[]){
    int i, index, ok, qtd = 0;
    char palavra[30], *pos, *posPrim, aux1, aux2;
    ok = 1;

    while(ok){
        index = 0;
        for(i = 0; i<strlen(frase); i++){
            if(frase[i] != ' '){
                palavra[index++] = frase[i];
            }else{
                palavra[index] = '\0';
                break;
            }
        }
        if(index>0){
            if(qtd == 0){
                pos = strstr(texto,palavra);
                posPrim = strstr(texto,palavra);
            }else{
                aux1 = pos[strlen(palavra)];
                aux2 = frase[strlen(palavra)];
                pos[strlen(palavra)] = '\0';
                frase[strlen(palavra)] = '\0';

                if(strcmp(pos, frase) == 0){
                    pos = pos + strlen(palavra);
                    //frase = frase + strlen(palavra);
                }else{
                    ok = 0;
                }
                //pos[0] = aux1;
                //frase[0] = aux2;
            }

        }

        qtd++;
    }
    if(i == strlen(frase)){
        return posPrim;
    }else{
        return NULL;
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
       pos = find(pos, frase);
       printf("teste");
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
