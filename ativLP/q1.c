
#include <stdio.h>
#include <string.h>

int main(){
  char num[30];
  char novoNum[30];
  int i, index;

  index = 0;
  printf("Informe o numero: ");
  gets(num);

  for(i = 0; i<strlen(num); i++){
      if(num[i] != ','){
          if(num[i] == '.'){
              novoNum[index++] = ',';
          }else{
              novoNum[index++] = num[i];
          }
      }
  }
  novoNum[index] = '\0';
  printf("Novo formato: ");
  puts(novoNum);
}
