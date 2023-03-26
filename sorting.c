#include <stdio.h> 

int main(){
    int arr[10] = {7,6,5,4,3,2,1};
    // getting the array
    // printf("input 7 elements in array is :\n");
    // for(int i = 0 ; i <= 6 ; i++){
    //     scanf("%d", &arr[i]);
    // }

    //sorting the array
    for(int i = 0; i <= 6 ; i++){
        // for(int j = i+1 ; j <= 6 ; j++){

        // }
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    // printing the array
    printf("The elements in array is :\n");
    for(int i = 0; i <= 6 ; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}