// write a program to print fibonacci series using array
#include <stdio.h> 

int main(){
    int arr[20];
    arr[0] = 0;
    arr[1] = 1;
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    for(int i = 2; i < 20 ; i++){
    arr[i] = arr[i-1] + arr[i-2];
    // print the fibonacci series 
    printf("%d\n", arr[i]);
    }   
    printf("\n");
    return 0;
}