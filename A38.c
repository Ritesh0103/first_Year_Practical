/* C Program to Count Uppercase, Lowercase, and Special Characters in String */
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[100];
    int i;
    int upper=0,lower=0,special=0 , numbers = 0;
    printf("Please enter the string \n");
    fgets(str, 100, stdin);
    
    // For Uppercase
    for(i=0; str[i] != '\0'; i++){
            if(str[i]>='A' && str[i]<='Z') {
                upper++;
    }
    
    // For Lowercase
    else if(str[i]>='a' && str[i]<='z') { 
               lower++;
    }
   
    // for numbers
    else if( str[i] >= '0' && str[i] <= '9'){
        numbers++;
    }
    // For special
    else{
        special++;
    }
    }
    printf("\nUpper case letters: %d",upper);
    printf("\nLower case letters: %d",lower);
    printf("\nSpecial characters: %d",special-1);
    printf("\nNumbers: %d", numbers);
    // getch();
    return 0;
}