#include <stdio.h> 

int main(){
    // int a[2][3] , b[2][3] , c[2][3];
    int r1 , c1 , r2 , c2 , a[10][10] , b[10][10], c[10][10] = {0} , uptang = 0 , elements;
    printf("Enter the rows and coulmn of 1st matrix : ");
    scanf("%d%d", &r1 , &c1);
    printf("Enter the rows and column of second matrix : ");
    scanf("%d%d", &r2 , &c2);
    printf("Enter the %d elements of 1st Matrix : ", r1*c1);
    for(int i = 0 ; i < r1 ; i++){
        for(int j = 0 ; j<c1 ; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the %d elements of 2nd Matrix : ", r2 * c2);
    for(int i = 0 ; i < r1 ; i++){
        for(int j = 0 ; j<c1 ; j++){
             scanf("%d", &b[i][j]);
        }
    }
    int num;
    printf("Enter the switch : ");
    scanf("%d", &num);
    // do{
        switch (num)
        {
        case 1 : 
                    for(int i = 0 ; i < r1; i++){
                        for(int j = 0 ; j<c1 ; j++){
                            if(a[i][j] == b[i][j]){
                                c[i][j] = a[i][j]+b[i][j]; 
                                printf("%d\t", c[i][j]);
                            }
                        }
                        printf("\n");
                    }
            break;
        case 2 : 
                    for(int i = 0 ; i < r1; i++){
                        for(int j = 0 ; j<c1 ; j++){
                                c[i][j] = a[i][j] - b[i][j]; 
                                printf("%d\t", c[i][j]);
                        }
                        printf("\n");
                    }
            break;
        case 4 : 
                    for(int i = 0 ; i <= r1 ; i++) {
                        for(int j = 0 ; j <= c1 ; j++) {
                            scanf("%d", &elements);
                            if(i>j){                         // checking the condition for upper Traingular matrix
                                if(elements == 0){           //checking the condition for upper Traingular matrix
                                uptang = 1;
                            }
                            else{
                	           uptang = 0;
                                }
                            }
                        }
                    } 
                    printf("%d", uptang);
            break;
        case 3 :    
                    
                    if(c1 != r2){
                        printf("Multiplication not exist");
                    }else{
                        // multiplying the matrix
                        for(int i = 0 ; i < r1 ; i++){
                            for(int j = 0 ; j < c2 ; j++){
                                // c[i][j] = 0;
                                for(int k = 0 ; k < c1 ; k++){
                                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                                }
                            }
                        }

                        // printing the multiplied matrix
                        for(int i = 0 ; i < r1 ; i++){
                            for(int j = 0 ; j < c2 ; j++){
                                printf("%d\t", c[i][j]);
                            }
                            printf("\n");
                        }
                    }
            break;
        
        default:
            printf("Nothing prints");
            break;
        }
    // }
    return 0;
}