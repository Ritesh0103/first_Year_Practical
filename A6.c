// inbuilt fn to know the size of an array

#include <stdio.h> 

int main(){
    int Hell[] = {2,4,6,8,10,12,14,16};

    int size = sizeof(Hell)/sizeof(int);

    printf("The size is %d", size);
    return 0;
}