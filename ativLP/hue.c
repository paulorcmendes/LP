#include <stdio.h>
#include <string.h>

int main(){
    char hue[] = "3456.5";
    float hehe;

    //fflush(stdin);
    //gets(hue);
    hehe = strtof(hue);
    printf("%f", hehe);

    return 0;
}
