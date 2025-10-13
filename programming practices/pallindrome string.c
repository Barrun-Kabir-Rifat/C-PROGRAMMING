#include<stdio.h>
int main()
{
    char str1[30],str2[30];
    printf("Enter a string:");
    scanf("%s",&str1);
    int i,len=0,j;
    for(i=0;str1[i]!='\0';i++)
    {
        len++;
    }
    for(i=len-1,j=0;i>=0;i--,j++)
    {
        str2[j]=str1[i];
    }
    int d =strcmp(str1,str2);

    if(d==0)
       printf("Strings are palindrome");
    else
        printf("Strings are not palindrome");

}

