// Counting sort

#include <stdio.h> 
#include <limits.h>
#include <math.h>
void counting_Sort(int arr[],int n) {
    int largest = INT_MIN;
    for(int i = 0 ; i < n ; i++) {
        largest = (int)fmax(largest , arr[i]);
    }
    int count[largest+1];
    for(int i = 0 ; i < n ; i++) {
        count[arr[i]]++;
    } 
    int j = 0;
    // sorting 
    for(int i = 0 ; i < sizeof(count) ; i++) {
        while(count[0] > 0){
            arr[j] = i;
            j++;
            count[i]--;
        }
    }
    
}

int main(){
    int arr[] = {5,4,1,3,2};
    int n;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    counting_Sort(arr , n);
    for(int i = 0 ; i < n ; i++){
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 0;
}