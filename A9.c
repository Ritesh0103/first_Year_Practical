// check wheather the year is leap year or not

#include <stdio.h> 

int main(){
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("It is the leap year");
    } else{
        printf("Is is not the leap year");
    }
    return 0;
}