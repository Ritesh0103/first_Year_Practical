/*C Program to copy string without using strcpy()*/
#include <stdio.h>
int main()
{
    char s1[100], s2[100],i;          //two character arrays s1,s2
    printf("Enter string s1: ");     
    fgets(s1, 100, stdin);           // Read string from stdin, of maximum length 100 
    for(i = 0; s1[i] != '\0'; ++i)   // copy to s2 
    {
        s2[i] = s1[i];
    } 
    s2[i] = '\0';                   // Append NULL character at end to mark end of string
    printf("String s2: %s", s2);
    return 0;
}