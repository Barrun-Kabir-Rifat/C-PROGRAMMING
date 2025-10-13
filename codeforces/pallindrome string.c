#include<stdio.h>
#include<string.h>
int main()
{
    char str[100000],str1[100000];
    scanf("%s",&str);
    int l=strlen(str);
    int i,j;
    for(i=l-1,j=0;i>=0;i--,j++)
    {
     str1[j]=str[i];
    }

    int d=strcmp(str,str1);
    if(d==0)
        printf("YES");
    else
        printf("NO");

}

