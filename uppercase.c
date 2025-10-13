#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",&str);
    int i,alpha=0,digit=0,special=0;
    int a= strlen(str);
    for(i=0;i<a;i++)
    {
      if((str[i]>='a'&& str[i]<='z')||(str[i]>='a'&& str[i]<='z'))
      {
          alpha++;
      }
      else if(str[i]>='0'&&str[i]<='9')
      {
          digit++;
      }
      else
        special++;
    }
    printf("Alphabet=%d\n",alpha);
    printf("Digit=%d\n",digit);
    printf("special character=%d\n",special);
}
