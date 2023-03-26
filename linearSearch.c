//linear Search code

#include <stdio.h> 
int linear_Search(int numbers[], int key) {
    for (int i = 0; i <= 7 ; i++)
    {
        if(numbers[i] == key){
            return i;
        }
    }
    return -1;    
}
int main(){
    int numbers[] = {2,4,6,8,10,12,14,16};
    int key = 10;
    // clrscr();
    int index = linear_Search(numbers , key);
    if(index == -1){
        printf("Not found ");
    }
    else{
        printf("%d \n",index);
    }
    return 0;
}