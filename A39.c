#include <stdio.h> 
#include <string.h>

void rev(char str[] , int length) {
    if(length == 0) {
        printf("%c" , str[length]);
        return;
    }
    printf("%c", str[length]);
    rev(str , length-1);
}

int main(){
    char str[100];
    fgets(str, 100, stdin);
    printf("%s", str);

    int length = strlen(str);

    rev(str , length);
    return 0;
}