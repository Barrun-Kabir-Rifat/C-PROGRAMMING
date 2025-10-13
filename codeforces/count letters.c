#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000000];
    scanf("%s",&str);
    int l=strlen(str);
    int i,j,ch=0;
    for(i=0;i<l;i++)
    {
       for(j=1;j<l;j++)
       {
           if(str[i]==str[j])
            ch++;
       }
    }
}
