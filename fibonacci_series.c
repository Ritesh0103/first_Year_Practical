#include <stdio.h> 

void fibonacci(int a , int b , int n){
    if(n == 0){
        return;
    }
    int c =  a + b;
    printf("%d\n", c);
    fibonacci(b , c , n-1);
}

int main(){
    int a = 0 , b = 1;
    int n;
    printf("Enter the last term of the fibonacci series : ");
    scanf("%d", &n);
    printf("%d\n", a);
    printf("%d\n", b);
    fibonacci(a , b , n-2);
    return 0;
}