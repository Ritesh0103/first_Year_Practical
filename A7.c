// fibonacci series

#include <stdio.h> 
// #include <conio.h>

void fibSeries(int a , int b , int n ) {
    if(n == 0) {
        return;
    }
    int c = a + b ;
    printf("%d \n", c);
    fibSeries(b , c , n-1);
}
int main(){
    int a = 0 , b = 1;
    int n;
    // clrscr();
    printf("Enter the last Fibonacci term : ");
    scanf("%d", &n);
    printf("%d \n", a);
    printf("%d \n", b);
    fibSeries(a , b , n-1);
    // getch();
    return 0;
}