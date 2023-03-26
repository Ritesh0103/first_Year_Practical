#include <stdio.h> 

void table(int n){
    int table = 1;
    for(int i = 1 ; i <= 10 ; i++){
        table = i * n;
        printf("%d\n", table);
    }
}

int main(){
    int n;
    printf("Enter the number to get the table : ");
    scanf("%d", &n);
    table(n);
    return 0;
}