#include <stdio.h> 

void swap(int n) {
    while(n != 0){
        int temp = n % 10;
        printf("%d", temp);
        n = n/10;
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter the number to get the reverse : ");
    scanf("%d", &n);
    swap(n);
    return 0;
}