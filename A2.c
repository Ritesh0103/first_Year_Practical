#include <stdio.h> 

int main(){
    float numb1, numb2;
    scanf("%f", &numb1);
    for(int i = 0; numb1 != -1 ; i++) {
        scanf("%f", &numb2);
        printf("%.1f", (numb1+numb2)/2);
        scanf("%f", &numb1);
        if(numb1 != -1){
            printf("%.1f", (numb2+numb1)/2);
        }	
    }
    return 0;
}