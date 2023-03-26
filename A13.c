// upper traingular matrix

#include <stdio.h> 

int main(){
    int n , elemnts , uptang;       /*N = size of the matrix , elements = all the number of elements , uptang = assigning upeertraingular matrix*/
    scanf("%d" , &n);
    for(int i = 0 ; i <= n-1 ; i++) {
        for(int j = 0 ; j <= n-1 ; j++) {
           scanf("%d", &elemnts);            //inputing the elements in the matrix
            if(i>j){                         // checking the condition for upper Traingular matrix
                if(elemnts == 0){           //checking the condition for upper Traingular matrix
                    uptang = 1;
                }
                else{
                	uptang = 0;
                }
            }
        }
    }
    printf("%d", uptang);            //Printing the output
    return 0;
}