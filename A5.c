// print the pairs

#include <stdio.h> 

void print_Pairs(int numbers[]) {
    for(int i = 0 ; i<=5 ; i++){
        int curr = numbers[i]; //2,4,6,8,10,12
        for(int j = i+1 ; j <= 5 ; j++){
            printf("(%d,%d)",curr , numbers[j]);
        }
        printf("\n");
    }
}

int main(){
    // Sub-array of the numbers[] array 
    int numbers[] = {2,4,6,8,10,12};

    print_Pairs(numbers);
    return 0;
}