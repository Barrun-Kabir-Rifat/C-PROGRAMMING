#include<stdio.h>
int main()
{
    char str1[15],str2[15],str3[15],b;
    printf("Enter a string:");
    scanf("%s",&str1);
    printf("Enter string 2:");
    scanf("%s",&str2);
    int a =strlen(str1);
    b=strcmp(str1,str2);
    strcpy(str3,str1);
    strcat(str3,str2);
    printf("The length of the first string = %d\n",a);
    if(b==0)
        printf("The string1 and string2 are equal\n");
    else
        printf("The strings are not equal\n");
    printf("After copying str1 to str3 is = %s\n",str3);
    printf("The addition of string2 and string 3 = %s\n",str3);






}

