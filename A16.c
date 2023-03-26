// Write a program to find sum of a geometric series

#include <stdio.h>

float sumgeometric(float a, float r, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a;
        a = a * r;
    }
    return sum;
}
int main()
{
    float a , r ;
    int n; // a = first term,  r = their common ratio , n = number of terms
    // float r; // 
    // clrscr();
    printf("Enter the first term , their common ratio and number of terms : ");
    scanf("%f%f%d", &a , &r , &n);
    printf("The geometric sum is %f\n", sumgeometric(a, r, n));
    // getch();
    return 0;
}