#include <stdio.h>
int main() {
  char s1[100] , s2[50] ;
  int length, j;

 printf("Enter first string: ");
  scanf("%s",&s1);

  printf("Enter second string: ");
  scanf("%s",&s2);
  // store length of s1 in the length variable
  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }

  // concatenate s2 to s1
  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }

  // terminating the s1 string
  s1[length]='\0';

  printf("After concatenation: ");
  puts(s1);

  return 0;
}
