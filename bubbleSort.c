// bubble sort

#include <stdio.h> 

void bubble_Sort(int arr[], int n) {
    for(int turn = 0 ; turn < n-1 ; turn++) {
        for(int j = 0 ; j < n - 1 - turn ; j++){
            if(arr[j] > arr[j+1]){
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int arr[] = {5,4,1,3,2};
    int n;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    bubble_Sort(arr , n);
    for(int i = 0 ; i < n ; i++){
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 0;
}