// optimized form of x^n?

#include <stdio.h> 

int optimized_power(int a , int n) {
    if(n == 0) {
        return 1;
    }
    int halfPower = optimized_power(a , n/2);
    int halfPower_Sqr = halfPower * halfPower;
    // if n is odd
    if(n%2 != 0) {
        halfPower_Sqr = a * halfPower_Sqr;
    }
    return halfPower_Sqr;
}

int main(){
    int a , n;
    printf("%d", optimized_power(2 ,3));
    return 0;
}