#include <stdio.h>

int main(){
    int i, dia, mes, ano, diasTotais = 0;

    printf("Que dia eh hoje? ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    diasTotais = dia;
    for(i=1; i<mes; i++){
        if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
            diasTotais = diasTotais+31;
        }else{
            if(i==2){
                if(((ano%4) == 0 && (ano%100) != 0)||(ano%400 ==0)){
                    diasTotais = diasTotais + 29;
                }else{
                    diasTotais = diasTotais + 28;
                }
            }else{
                diasTotais = diasTotais + 30;
            }
        }
    }
    printf("\nDias Totais: %d", diasTotais);

    return 0;
}
