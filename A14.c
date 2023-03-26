// Write a recursive program for tower of Hanoi problem

#include <stdio.h> 

void towerOfHanoi(int n, char src , char helper , char dest){
     if (n == 1) {
        printf("transfer disk %d from %c to %c \n" , n , src , dest);
        return;
        }
        towerOfHanoi(n-1, src, dest, helper);
        printf("transfer disk %d from %c to %c \n" , n , src , dest);
        towerOfHanoi(n-1, helper, src, dest);
}
int main(){
    int n;
    char src = 'S' , helper = 'H' , dest = 'D';
    // clrscr();
    printf("Enter the number of disk rested in src : ");
    scanf("%d", &n);
    towerOfHanoi(n , src , helper , dest);
    // getch();
    return 0;
}
