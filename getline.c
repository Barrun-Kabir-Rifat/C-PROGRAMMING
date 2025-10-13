#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char str[1000000] ;
   scanf("%[^\n]s",&str);
   int i,a;
   a=strlen(str);
   for(i=0;i<a;i++)
  {
     if(str[i]=='\\')
      {
       break;
      }
    printf("%c",str[i]);
  }
}
