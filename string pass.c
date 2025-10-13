#include<stdio.h>
void string(char str1[],char str2[])
{
  int l=strlen(str1);
  printf("Length1=%d",l);
  int l1=strlen(str2);
  printf("Length2=%d",l1);
}
int main()
{
   char str1[100],str2[100] ;
   scanf("%s%s",&str1,&str2);
   string(str1,str2);

}
