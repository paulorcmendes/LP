#include <stdio.h>


int main(){

    int x1, y1, x2, y2, n, x, y,i,j,k,quantidade=0,teste=0;

    while((x1!=0)&&(y1!=0)&&(x2!=0)&&(y2!=0)){
        //printf("\n\ndigite as coordenadas do retangulo\n\n");
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

        if((x1==0)&&(y1==0)&&(x2==0)&&(y2==0)){
            break;
        }

        //printf("\n\ndigite a quantidade de meteoros\n\n");
        scanf("%d",&n);

        for(i=0;i<n;i++){
            //printf("\n\ndigite as coodenadas dos meteoros\n\n");
            scanf("%d%d",&x,&y);
            if((x>=x1)&&(x<=x2)&&(y<=y1)&&(y>=y2)){
            quantidade++;
            }
        }
        teste++;

        printf("Teste %d\n%d\n\n",teste,quantidade);
        quantidade=0;
    }

}


