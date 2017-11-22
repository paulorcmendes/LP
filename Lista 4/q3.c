#include <stdio.h>

int main(){
    int i;
    float saldo, depInicial, invMensal, meses, dinheiroQueJaEraMeu, lucro;

    printf("Informe o deposito Inicial: ");
    scanf("%f", &depInicial);
    saldo = depInicial;
    printf("Informe o investimento mensal: ");
    scanf("%f", &invMensal);
    printf("Informe a quantidade de meses: ");
    scanf("%f", &meses);

    for(i = 0;i<meses; i++){
        saldo = (saldo + invMensal);
        saldo = (saldo + saldo*0.005);
    }
    dinheiroQueJaEraMeu = depInicial + (invMensal*meses);
    lucro = saldo - dinheiroQueJaEraMeu;

    printf("\n\nlucro: %f", lucro);
    return 0;
}
