#include <stdio.h>
#include <string.h>

/* Texto: a frase do joao e mais ou menos assim, como se fosse fosse joao o mais ou menos
A ser buscado: joao e mais ou menos */
int main(){
    char texto[300];
    char frase[100];
    char palavraAntes[50];
    char palavrasF[50][50];
    char palavrasT[50][50];
    int i, j, qtdNoTexto, letDepois, indexF1, indexF2, indexT1, indexT2, count, blz;

    /*
    indexF1 - posição de cada palavra na frase
    indexF2 - posição de cada letra em cada palavra da frase
    indexT1 - posição de cada palavra no texto
    indexT2 - posição de cada letra em cada palavra do texto
    */
    gets(texto);
    gets(frase);

    //guardando as palavras da frase em um vetor
    indexF1 = 0;
    indexF2 = 0;
    for(i = 0; i<=strlen(frase); i++){
        if(frase[i] == ' ' || i == strlen(frase) || frase[i] == '\0'){
           palavrasF[indexF1][indexF2] = '\0';
           //puts(palavrasF[indexF1]);
           indexF1++;
           indexF2 = 0;
        }else{
           palavrasF[indexF1][indexF2++] = frase[i];
        }
     }
     //guardando as palavras do texto em um vetor
    indexT1 = 0;
    indexT2 = 0;
    for(i = 0; i<=strlen(texto); i++){
        if(texto[i] == ' ' || i == strlen(texto) || texto[i] == '\0'){
           palavrasT[indexT1][indexT2] = '\0';
           //puts(palavrasT[indexT1]);
           indexT1++;
           indexT2 = 0;
        }else{
           palavrasT[indexT1][indexT2++] = texto[i];
        }
     }

    for(i = 0; i<=indexT1; i++){
        qtdNoTexto =0;
        blz =0;
        /*
         A variável qtdNoTexto percorre as palavras no texto
         A variável blz percorre as palavras na frase
        */
        if(strcmp(palavrasT[i], palavrasF[0]) == 0){
            while(qtdNoTexto<indexT1 && blz<indexF1){
                if(strlen(palavrasF[blz])<3){
                    blz++;
                }
                else if(strlen(palavrasT[i+qtdNoTexto])<3){
                    qtdNoTexto++;
                }
                else if(strcmp(palavrasT[i+qtdNoTexto], palavrasF[blz])== 0){
                    blz++;
                    qtdNoTexto++;
                }else{
                    qtdNoTexto++;
                }
            }
        }
        if(blz == indexF1){
            count = 0;
            j = 0;
            if(i == 0){
                printf("\n\nNo comeco do texto: ");
            }else{
                for(j = 0; j < i; j++){
                    if(strcmp(palavrasT[j], palavrasT[i-1]) == 0) count++;
                }
                j = 0;
                switch(count){
                case 1:
                    strcpy(palavraAntes, "primeiro");
                    break;
                case 2:
                    strcpy(palavraAntes,  "segundo");
                    break;
                case 3:
                    strcpy(palavraAntes, "terceiro");
                    break;
                case 4:
                    strcpy(palavraAntes, "quarto");
                    break;
                case 5:
                    strcpy(palavraAntes, "quinto");
                    break;
                default:
                    strcpy(palavraAntes, "qualquer um");
                }

                printf("\n\nDepois do %s [%s]:", palavraAntes, palavrasT[i-1]);
               j--;
            }
            /*
            do{
                strcpy(palavraAntes, palavrasT[i+j]);
                printf(" %s", palavraAntes);
                j++;
            }while(strcmp(palavraAntes, palavrasF[indexF1-1]));
            */
            while(j<qtdNoTexto){
                printf(" %s", palavrasT[i+j]);

                j++;
            }

        }
    }

    return 0;
}
