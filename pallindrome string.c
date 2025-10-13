#include<stdio.h>
int main()
{
    char str1[30],str2[30];
    printf("Enter a string:");
    scanf("%s",&str1);
    str2=strrev(str1);
    int value = strcmp(Str1,str2);
    if(vallue==0)
        printf("The string is palindrome");
    else
        printf("It's not palindrome");

}
