#include <stdio.h> 

long fact(n){
    if(n == 0) {
        return 1;
    }else{
        return n * fact(n-1);
    }
}

int main(){
    long r,n;
    printf("enter a number : ");
    scanf("%ld", &n);
    r = fact(n);
    printf("factorial = %ld \n", r);

    return 0;
}