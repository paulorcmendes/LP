#include <stdio.h>

int main(){
  int v1[5] =  {1,2,3,4};
  int v2[5] = {3,4,5,6};
  int vu[5];

  int indice=0;

  int i, j, check1 = 1, check2 = 1;

  for(i=0;i<4;i++){
      check1 = 1;
      check2 = 1;
      for (j=0;j<4; j++){
        if(v1[i] == v2[j]){
           check1 = 0;
           break;
        }

      }
      for(j=0; j<indice; j++){

        if (v1[i]==vu[j]){
             check2=0;
             break;
        }

    }
    if (check1 && check2){
       vu[indice] = v1[i];
       indice++;
    }



  }
   for (i=0;i<indice;i++){
        printf("%i ", vu[i]);
   }
}
