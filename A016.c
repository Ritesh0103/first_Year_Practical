// factorial of a number

#include <stdio.h> 

int fact(int n){
    if(n == 0){
        return 1;
    }
    int fnm1 = fact(n-1);
    int fact = n * fnm1;
    return fact;
}

int main(){
    int k;
    int n;
    scanf("%d", &k);
    for(int i = 1; i<=k ; i++){
        scanf("%d", &n);
        printf("%d", fact(n));
    }
    return 0;
}