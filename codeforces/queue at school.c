#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    char str[n],temp;
    scanf("%s",&str);
    int i,j;
    for(i=0;i<t;i++)
    {
        for(j=0;j<n;j++)
        {
            if(str[j]=='B'&& str[j+1]=='G')
            {
              str[j]='G';
              str[j+1]='B';
            }
            printf("%c",str[j]);
        }
    }
}
