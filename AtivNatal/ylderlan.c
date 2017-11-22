#include<stdio.h>
#include<string.h>
int main(){
    char texto[150];
    char frase[100];
    char palavra[50];
    int i,j,k,z,aux = 0, cont = 0, v;
    char str;
    printf("informe o texto:\n");
    fflush(stdin);
    gets(texto);
    printf("informe a frase:\n");
    fflush(stdin);
    gets(frase);
   //*------------------------------- percorre o texto e a frase
    for(i = 0; i <= strlen(texto) - strlen(frase); i++){
        if(texto[i] == frase[0]){
            for(j = 0; j < (strlen(frase)); j++){
                if (frase[j] != texto[i+j]){
                    break;
                }
            }
//*--------------------------------- testa se a frase esta no começo
            if (j == strlen(frase)){
                if (i == 0){
                    v = 0;
                }
                else{
                    v = 1;
//*--------------------------------- encontra palavra anterior a frase
                    aux = 0;
                    k = (i-2);
                    while (texto[k]!= ' ' && k>=0){
                        palavra[aux++] = texto[k];
                        k--;
                    }
                    palavra[aux] ='\0';
                }
//*--------------------------------------------inverte a palavra anterior a frase
                if ((strlen(palavra))%2==0){
                    for(z = 0; z < ((strlen(palavra))/2); z++){
                        str = palavra[z];
                        palavra[z] = palavra[(strlen(palavra) - z)- 1];
                        palavra[((strlen(palavra) - z) - 1)] = str;
                    }
                }
                else{
                    for(z = 0; z < (((strlen(palavra))-1)/2); z++){
                        str = palavra[z];
                        palavra[z] = palavra[(strlen(palavra) - z) - 1];
                        palavra[(strlen(palavra) - z) - 1] = str;
                    }
                }
 //*-------------------------------------------- printa a palavra e a frase
                if (v == 1){
                    printf("a frase %s comeca depois de: %s", frase, palavra);

                }
                else{

                    printf("a frase %s comeca no incio do texto", frase);
                }
            }
        }
    }
    return 0;
}
