#include <stdio.h> 
#include <string.h>

int check_pelindome(char m[20]){
    int check = 1;
    int length = strlen(m);
    int first = 0 , last = length - 1;
    while(first < last){
        if(first != last){
            check = 0;
            break;
        }
    }
    return check;
}

int main(){
    char m[20] = "racecar";
    if(&check_pelindome == 0){
        printf("The string is not a pelindrome");
    }else{
        printf("The string is the pelindrome");
    }
    return 0;
}