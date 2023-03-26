#include <stdio.h> 
// #include<conio.h> 
int main()
{
    int n, i;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (i = 2; i <= n-1; i++)
    {
        if (n % i == 0)
        {
            printf("not a prime number\n");
            break;
        }
    }
    if (i == n){
        printf("prime number\n");
    }
    // getch();
    return 0;
}