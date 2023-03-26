#include <stdio.h> 
#include<math.h>

void isPrime(int n, int sqrtn) {
    
}
int main(){
    int n;
    int isPrime = 0;
    scanf("%d", &n);
    if(n == 0 || n == 1) {
        printf("Neither Prime Nor Composite");
    }
    int sqrtn = sqrt(n);
    for(int i = 2 ; i <= sqrtn ; i++) {
        if(n % i == 0) {
           isPrime = 1;
           break;
        }
    }
    
    if(isPrime == 0) {
        printf("%d is Prime number\n", n);
    }else{
        printf("%d is not the prime number\n", n);
    }
    return 0;
}