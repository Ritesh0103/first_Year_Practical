#include<stdio.h>
 
int main() {
    int arr[20], i, n;
    
    scanf("%d", &n); /* Accepts the number of elements in the array */

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); /*Accepts the elements of the array */
    }
    
    int first = 0 , last = n-1;
    while(first <= last) {
        // swap
        int temp = arr[last];
        arr[last] = arr[first];
        arr[first] = temp;
        first++;
        last--;
    }

    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]); // For printing the array elements 
    }
    printf("\n");
    return (0);
    }
