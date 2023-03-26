#include <stdio.h> 

int main(){
    // int a , b , c , d;
    // printf("Enter the numbers : ");
    // scanf("%d%d%d%d", &a , &b , &c , &d);
    int m[3][3], n[3][3];
    int mul[3][3]={0};
    if(3 == 3) {
        
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j<3 ; j++){
                scanf("%d", &m[i][j]);
            }
        }
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j<3 ; j++){
                scanf("%d", &n[i][j]);
            }
        }

        for(int i = 0 ; i < 3 ; i++)
            for(int j = 0 ; j<3 ; j++)
            for (int k = 0; k < 3; k++)
                    sum = sum + m[i][k] * n[k][j];
                
            
        }
    }else{
        printf("Multiply cannot be possible");
    }
    for (int i = 0; i < 3; i++){
            for (int j = 0; i < 3; j++){
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
    return 0;
}