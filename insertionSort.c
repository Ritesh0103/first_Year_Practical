// insertion sort

#include <stdio.h> 

void insertion_Sort(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        int curr = arr[i];
        int prev = i-1;
        // finding the correct postion to insert
        while(prev >= 0 && arr[prev] > curr) {
            arr[prev+1] = arr[prev];
            prev--;
        }
        // insertion
        arr[prev+1] = curr;
    }
}

int main(){
    int arr[] = {5,4,1,3,2};
    int n;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    insertion_Sort(arr , n);
    for(int i = 0 ; i < n ; i++){
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 0;
}