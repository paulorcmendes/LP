#include <stdio.h>
#include <string.h>

int main(){
    char entrada[30];
    char carac = '2';
    int i;

    gets(entrada);

    printf("\n\nString Quebradinha: \n\n");
    for(i = 0;i < strlen(entrada); i++){
        if(entrada[i] == carac){
            printf("\n\n");
        }else{
             printf("%c", entrada[i]);
        }
    }



}
