#include <stdio.h>
#include <string.h>
int main() {
  char s1[] = "programming ", s2[] = "is awesome";
  int j;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
  // concatenate s2 to s1
  for (j = 0; j <= len2; j++) {
    s1[len1+j] = s2[j];
  }
  puts(s1);
  exit(0);
  return 0;
}