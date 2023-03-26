#include <stdio.h> 
#include <math.h>
void bintodec(int binNum) {
    int power = 0;
    int decNum = 0;
    int initial_binNum = binNum;
    while(binNum > 0) {
        int last_digit = binNum%10;
        decNum = decNum + (last_digit * pow(2,power));
        power++;
        binNum = binNum/10;
    }
    printf("decimal of %d is %d", initial_binNum , decNum);
}

int main(){
    bintodec(101);
    return 0;
}