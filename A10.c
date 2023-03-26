// find the largest element of all the numbers having the last element is -1

#include <stdio.h> 

int main(){
    int prev , curr , dist = 1;
    printf("Enter the first Previous numbers : ");
    scanf("%d", &prev);
    if(prev != -1){
        scanf("%d", &curr);
        while(curr != -1){
            if(prev != curr){
                dist = dist+1;
            }
            prev = curr;
            scanf("%d", &curr);
        }
    }
    printf("The largest Number is %d\n", dist);
    return 0;
}