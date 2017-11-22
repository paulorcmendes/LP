#include<stdio.h>
#include<string.h>

int main(){
char valores[30],operacoes[4];
int i,j=0;

printf("informe o valores:");
fflush (stdin);
gets(valores);
printf("informe as operacoes:");
fflush (stdin);
gets(operacoes);

for(i=0;i<strlen(operacoes);i++){
        if (operacoes[i]=='+'){
            printf(" soma: %i\n",(valores[j] - '0')+(valores[j+1]-'0'));
        }
        if (operacoes[i]=='*'){
            printf("Produto:%i\n",(valores[j] - '0')*(valores[j+1]-'0'));
        }
        if (operacoes[i]=='/'){
            printf("Divisao: %i\n",(valores[j] - '0')/(valores[j+1]-'0'));
        }
        if (operacoes[i]=='-'){
            printf("Subtracao: %i\n",(valores[j] - '0')-(valores[j+1]-'0'));

        }
        j++;
    }
}
