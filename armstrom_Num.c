#include <stdio.h> 
#include <math.h>
int main(){
    int n , arm = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    int prev_n = n;

    while(n > 0) {
        int rem = n%10;
        arm = arm + pow(rem , 3);
        n = n/10;
    }

    if(arm == prev_n) {
        printf("It is an armstrome number \n");
    }else{
        printf("It is not an armstrome number\n");
    }
    return 0;
}