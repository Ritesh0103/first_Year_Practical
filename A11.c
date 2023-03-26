// to find the second largest number from a group of numbers having the last number -1;

#include <stdio.h> 

int main(){
    int num, fbig = 0 , secbig = 0;  /*num = all assign num , fbig = Largest Number , secbig = second largest number */
    scanf("%d", &num); //Number input
    while(num != -1){
    
        if(num > fbig){              // Checking the condition
            secbig = fbig;
            fbig = num;
        }
        if(num > secbig && num < fbig) {
            secbig = num;
        }
        scanf("%d", &num);        // inuput number in loop
    }
    printf("%d" , secbig);
    return 0;
}