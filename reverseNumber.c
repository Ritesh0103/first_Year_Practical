// reverse of a number

#include <stdio.h> 

int main(){
    int num;
    printf("Enter the number to get the rev of the number : ");
    scanf("%d", &num);
    int num1 = num;
    int rev = 0;
    while(num != 0) {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num/10;
    }
    printf("the reverse of %d is %d.\n", num1 , rev);
    return 0;
}