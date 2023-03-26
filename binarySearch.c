// binary search

#include <stdio.h> 
int binSearch(int numbers[] , int key);

int main(){
    int numbers[] = {2,4,6,8,10,12,14,16};
    int key;
    printf("Enter the number to find the index : ");
    scanf("%d", &key);

    printf("The key is on index : %d \n", binSearch(numbers , key));
    return 0;
}

int binSearch(int numbers[] , int key){
    int start = 0 , end = 7;

    while (start <= end)
    {
        int mid = (start+end)/2;

        // condition
        if(numbers[mid] == key){
            return mid;
        } else if(numbers[mid] < key) {
            start = mid+1;
        } 
        else{
            end = end-1;
        }
    }
    return -1;
}