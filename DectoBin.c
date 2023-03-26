#include <stdio.h> 
#include <math.h>
void decTobin(int n){
    int myNum = n;
    int power = 0;
    int binNum = 0;
    while(n>0){
        int last_digit = n % 2;
        binNum = binNum + (last_digit * pow(10 , power));
        power++;
        n = n/2;
    }
    printf("The dec %d in bin is %d.\n", myNum , binNum);
}

int main(){
    decTobin(5);
    return 0;
}