#include<stdio.h>
#include<string.h>
int main()
{
   int t;
   scanf("%d",&t);
   int i,j,count=0;
   char str[100000];
   for(i=1;i<=t;i++)
   {
       scanf("%s",&str);
       int l=strlen(str);
       count=0;
       for(j=0;j<l;j++)
       {
           if((str[j]=='0'&&str[j+1]=='1'&&str[j+2]=='0')||(str[j]=='1'&&str[j+1]=='0'&&str[j+2]=='1'))
           {
               count++;
               break;
           }

       }
      if(count==0)
    printf("Bad\n");
   else
     printf("Good\n");
   }

}
