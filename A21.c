#include <stdio.h> 

int main(){
    FILE *fp;
    fp = fopen("File1.txt" , "a+");
    fgets(" " , fp);
    fprintf(fp , "%s" ,"\nHello google");
    fclose(fp);
    return 0;
}