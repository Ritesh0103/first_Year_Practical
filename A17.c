// addition of the matrix

#include <stdio.h> 
int main(){
    int a[2][3] , b[2][3] , c[2][3];
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j<3 ; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j<3 ; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j<3 ; j++){
            if(a[i][j] == b[i][j]){
                c[i][j] = a[i][j]+b[i][j]; 
                printf("%d\t", c[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}