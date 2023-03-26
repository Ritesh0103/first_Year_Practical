// factorial of a number

#include <stdio.h>

int find_factorial(int k){
   /* Write your code here*/
   if(k == 0){
    return 1;
   }
   int fmn1 = find_factorial(k-1);
   return k * fmn1;
}

int main(){
    int k;
    // clrscr();
    printf("Enter the number to find the factorial : ");
    scanf("%d",&k);
    printf("The factorial of the %d is %d \n", k , find_factorial(k));
    // getch();
    return 0;
}