#include <stdio.h>

int main(){
    int n, i, fat=1;

    printf("Informe o n: ");
    scanf("%d", &n);

    for(i = 1;i<=n; i++){
        fat=fat*i;
    }
    printf("n! = %d", fat);
    return 0;
}
