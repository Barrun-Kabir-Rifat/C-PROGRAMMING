#include<stdio.h>
#include<string.h>
int main()
{
  char ch[100];
  scanf("%s",&ch);
  int l=strlen(ch);
  int i,upper=0,lower=0;
  for(i=0;i<l;i++)
  {
      if(ch[i]>='A'&&ch[i]<='Z')
        upper++;
      if(ch[i]>='a'&&ch[i]<='z')
        lower++;
  }
  if(upper>lower)
  {
      for(i=0;i<l;i++)
      {
         if(ch[i]>='A'&&ch[i]<='Z')
          printf("%c",ch[i]);
       if(ch[i]>='a'&&ch[i]<='z')
        printf("%c",ch[i]-32);
      }
  }
  if(lower>=upper)
  {
      for(i=0;i<l;i++)
      {
         if(ch[i]>='A'&&ch[i]<='Z')
          printf("%c",ch[i]+32);
       if(ch[i]>='a'&&ch[i]<='z')
        printf("%c",ch[i]);
      }
  }
}
