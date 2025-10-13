#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000000];
   scanf("%s",&str);
   int i,a,sum=0;
   a=strlen(str);
   for(i=0;i<a;i++)
   {
     if(str[i]>='0'&&str[i]<'9')
     {

     }
        sum=sum+(str[i]-'0');
   }
   printf("%d",sum);
}
