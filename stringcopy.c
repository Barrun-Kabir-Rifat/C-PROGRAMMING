#include<stdio.h>
int main()
{
    char str1[30],str2[30];
    printf("Enter string1:");
    scanf("%s",&str1);
    printf("String1=%s\n",str1);
    strcpy(str2,str1);
    printf("Target string= %s",str2);
}

