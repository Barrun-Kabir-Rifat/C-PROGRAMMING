#include<stdio.h>
int main()
{
  char str1[30],str2[30];

  printf("Enter first string: ");
  scanf("%s",&str1);

  printf("Enter second string: ");
  scanf("%s",&str2);
  int i=0,j=0,len=0;
  while(str1[i]!='\0')
  {
      len++;
        i++;


  }




  while(str2[j]!='\0')
  {
      str1[len+j]=str2[j];
      j++;


  }

  str1[len+j]='\0';//terminatint the result string

  printf("%s",str1);



}
