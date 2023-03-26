// check wheather the number is multiple or not

#include <stdio.h> 

int main(){
    int a , b ;
    printf("Enter the two number a and b : ");
    scanf("%d %d", &a , &b);
    if(a % b == 0 || b % a == 0) {
        printf("a is the multiple of b ");
    }else{
        printf("The numbers are not a multiple of each other");
    }
    return 0;
}