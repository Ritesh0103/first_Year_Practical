// Write a recursive program to print the first m Fibonacci number

#include <stdio.h> 
// #include <conio.h>

void fibSeries(int a , int b , int m ) {
    if(m == 0) {
        return;
    }
    int c = a + b ;
    printf("%d \n", c);
    fibSeries(b , c , m-1);
}
int main(){
    int a = 0 , b = 1;
    int m;
    // clrscr();
    printf("Enter the last Fibonacci term : ");
    scanf("%d", &m);
    printf("%d \n", a);
    printf("%d \n", b);
    fibSeries(a , b , m-1);
    // getch();
    return 0;
}