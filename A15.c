// Write a program to find divisor or factorial of a given number.

#include <stdio.h> 
int fact(int n){
    int factoial;
    if(n == 1){
        return 1;
    }
    factoial = n * fact(n-1);
    return factoial;
}
int main(){
    int n;
    printf("Enter the number(to find factorial) : ");
    scanf("%d", &n);
    printf("the factorial of %d is %d.\n", n , fact(n));
    return 0;
}