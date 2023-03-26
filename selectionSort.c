// Selection sort 

#include <stdio.h> 

void selection_Sort(int arr[] , int n){
    for(int i = 0 ; i < n-1 ; i++) {
        int minPos = i;
        for(int j = i+1 ; j < n ; j++){
            if(arr[minPos] > arr[j]) {
                minPos = j;
            }
        }
        // swap
        int temp = arr[minPos];
        arr[minPos] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int arr[] = {5,4,1,3,2};
    int n;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    selection_Sort(arr , n);
    for(int i = 0 ; i < n ; i++){
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 0;
}