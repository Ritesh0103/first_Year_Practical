#include <stdio.h> 

int sum_of_digit(int n){
    int sum = 0;
    while(n != 0){
        int temp = n % 10;
        sum = sum + temp;
        n = n/10;
    }
    return sum;
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("The sum of digit of %d is %d.\n", n , sum_of_digit(n));
    return 0;
}