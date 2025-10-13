#include<stdio.h>
#include<string.h>
int main()
{
   char str1[1000],str2[1000];
   scanf("%s",&str1);
   scanf("%s",&str2);
  int d=strlen(str1);
  int e=strlen(str2);
  printf("%d %d",d,e);
  printf("\n");
  printf("%s %s",str1,str2);

}
