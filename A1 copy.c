#include <stdio.h> 
#include <stdlib.h>
int main(){
    int hell[] = {1,2,3,4,5,6};
    int n = sizeof(hell)/sizeof(int); 
    int count = 0;      //size of an array
    for(int i = 0 ; i <= n-1 ; i++){
        if(!(hell[i+1] > hell[i])){
            printf("The array is not sorted\n");
            break;
        }else{
            if(count == 1){
                printf("The array is sorted\n");
            }
            count++;
        }
    }
    return 0;
}