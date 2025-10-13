#include<stdio.h>
int main()
{
    char str1[15],str2[15];
    printf("Enter a upper case string:");
    scanf("%s",&str1);
    printf("Enter a lower case string 2:");
    scanf("%s",&str2);
    int a = strlen(str1);
    int b = strlen(str2);
    int i;
    for(i=0;i<a;i++)
    {
      str1[i]=str1[i]+32 ;
    }


    for(i=0;i<b;i++)
    {
      str2[i]=str2[i]-32 ;
    }
    printf("The lowercase conversion of str1 = %s\n",str1);

    printf("The uppercase conversion of str2 = %s\n",str2);



}


