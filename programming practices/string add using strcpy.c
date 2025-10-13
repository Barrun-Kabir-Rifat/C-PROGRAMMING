#include <stdio.h>
#include <string.h>

int main() {
    char str1[50];
    char str2[50];
    char result[100];
    printf("Enter first string: ");
  scanf("%s",&str1);

  printf("Enter second string: ");
  scanf("%s",&str2);

    strcpy(result, str1);  // Copy str1 into result
    strcat(result, " ");   // Add a space to result
    strcat(result, str2);  // Concatenate str2 to result

    printf("%s", result);  // Print the concatenated string

    return 0;
}
