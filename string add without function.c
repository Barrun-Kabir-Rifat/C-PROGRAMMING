#include<stdio.h>
int main()
{
 char str1[30]="Bangladesh ";
 char str2[30]="Cricket team";
 int i=0,j=0,len=0;
 while(str1[i]!='\0')
 {
     i++;
     len++;
 }
 while(str2[j]!='\0')
 {
     str1[len+j]=str2[j];
     j++;
 }
 printf("%s",str1);

}
