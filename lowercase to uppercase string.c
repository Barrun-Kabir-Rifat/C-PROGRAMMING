#include<stdio.h>
int main()
{
    char str1[15],str2[15];
    printf("Enter a upper case string:");
    scanf("%s",&str1);
    printf("Enter a lower case string 2:");
    scanf("%s",&str2);
    strlwr(str1);
    strupr(str2);
    printf("The lowercase conversion of str1 = %s\n",str1);

    printf("The uppercase conversion of str2 = %s\n",str2);
}
