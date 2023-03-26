#include <stdio.h> 
enum months{january = 1, february , march , april ,may , june , july , august , september , october , november , december};
int main(){
    for(int i = january ; i <= december ; i++) {
        printf("%d\t\v", i);
    }
    printf("\n");
    return 0;
}