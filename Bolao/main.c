#include <time.h>
#include "bolao.h"

int main(){
    int op;
    srand(time(NULL));
    do{
        op = opcaoUsuario();
        if(op == 1){
            apostaComum();
        }else if(op == 2) {
            apostaPersonalizada();
        }else if(op == 3){
            printf("\n\nSAINDO...");
        }else{
            nenhumaOpcao();
        }
    }while(op!=3);
}
