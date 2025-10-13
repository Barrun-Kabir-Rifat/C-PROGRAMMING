#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i;
    char str[150];
    for(i=1;i<=t;i++)
    {
        scanf("%s",&str);
       int l= strlen(str);
       if(l<=10)
       {
           printf("%s\n",str);
       }
       else
       {
          printf("%c%d%c\n",str[0],l-2,str[l-1]);
       }

    }

}
