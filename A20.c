#include <stdio.h> 
int find_odd(int k){
    if(k == -1){
        return -1;
    }
    int num;
    int ans;
    for(int i = 0 ; i<k ; i++){
        scanf("%d", &num);
        if(k == 0){
        if(num%2 != 0){
            return ans;
        } 
        }else{
        find_odd(k-1);
    }
    }
    return ans;
}
int main(){
    int k;
    scanf("%d", &k);
    printf("%d", find_odd(k));
    return 0;
}