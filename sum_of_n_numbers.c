#include <stdio.h> 

int sum_of_num(int n){
    if(n <= 0){
        return -1;
    }
    int i = 0 , sum = 0;
    while(i <= n){
        sum = sum + i;
        i++;
    }
    return sum;
}

int main(){
    int n;
    printf("Enter the last number at which you want to add : ");
    scanf("%d", &n);
    printf("The sum of numbers from 1 to %dth term is %d.\n", n , sum_of_num(n));
    return 0;
}