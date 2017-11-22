#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int i, indexN, indexOp, indexAux, qtd;
    float total;

    indexN = 0;
    indexOp = 0;
    indexAux = 0;

    char all[20];
    float nums[10];
    char ops[9];
    char aux[10];

    printf("Beleza. Informe a sequencia: ");
    fflush(stdin);
    gets(all);

    for(i = 0; i<=strlen(all); i++){
        if(all[i] == '+' || all[i] == '-' || all[i] == '/' || all[i] == '*' || all[i] == '\0'){
            aux[indexAux] = '\0';
            indexAux = 0;
            ops[indexOp++] = all[i];
            nums[indexN++] = atof(aux);
        }else{
            aux[indexAux++] = all[i];
        }
    }
    total = nums[0];

    for(i = 1; i<=strlen(ops); i++){
        if(ops[i-1] == '+'){
            printf("\n%.2f + %.2f = ", total, nums[i]);
            total += nums[i];
            printf("%.2f", total);
        }else if(ops[i-1] == '-'){
            printf("\n%.2f - %.2f = ", total, nums[i]);
            total -= nums[i];
            printf("%.2f", total);
        }else if(ops[i-1] == '*'){
            printf("\n%.2f * %.2f = ", total, nums[i]);
            total = (total*nums[i]);
            printf("%.2f", total);
        }else if(ops[i-1] == '/'){
            printf("\n%.2f / %.2f = ", total, nums[i]);
            if(nums[i] == 0){
                printf("Ce ta locao? Ignorando...\a");
            }else{
                total = (total/nums[i]);
                printf("%.2f", total);
            }
        }
    }
    printf("\n\nO Resultado eh: %.2f", total);
    return 0;
}
