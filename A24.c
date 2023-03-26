// printing of a 2D aaray

#include <stdio.h> 

int main(){
    int m , n;
    printf("Enter the size of an matrix: ");
    scanf("%d%d", &m , &n);
    int matrix[m][n];
    printf("Enter %d number of element of the matrix  :", m*n);
    // input the elements
    for(int i = 0; i<m ; i++){
        for(int j = 0 ; j< n ; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    // outputing the elements
    for(int i = 0; i<m ; i++){
        for(int j = 0 ; j< n ; j++){
            if(i==j){
                printf("%d", matrix[i][j]);
            }
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}