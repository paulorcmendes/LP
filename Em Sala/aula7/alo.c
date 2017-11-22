#include <stdio.h>
#include <string.h>

int main(){
    char texto[100];
    char busca[20];
    char *pos;
    int oc;
    int i;
    int cont = 0;

    gets(texto);

    scanf("%s", busca);
    pos = texto;

    while(strcmp(busca, "\\q")){

        if(pos!=NULL){
            printf("possui: %s \n", pos);
        }

        while(pos!=NULL){
            pos = pos+(strlen(busca));
            pos = strstr(pos, busca);
            cont++;
        }

        printf("ocorrencias: %d\n", cont);
        scanf("%s", busca);
        scanf("%d", &oc);
        pos = texto;
        pos = strstr(pos, busca);

        for(i = 0; i<oc; i++){
            if(pos!=NULL){
                pos = pos+(strlen(busca));
                pos = strstr(pos, busca);
            }else{
                printf("ce ta locao");
                break;
            }
        }

        cont = 0;
    }


    return 0;

}
