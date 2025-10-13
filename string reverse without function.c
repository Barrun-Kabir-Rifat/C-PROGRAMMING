#include<stdio.h>
int main()
{
    char str1[30],str2[30];
    printf("Enter a string:");
    scanf("%s",&str1);
    int i,j,len=0;
    while(str1[i]!='\0')
    {
         i++;
         len++;

    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        str2[j]=str1[i];
    }
    printf("Reverse string = %s",str2);




}
