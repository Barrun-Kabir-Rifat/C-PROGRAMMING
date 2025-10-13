#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    char ch[9][9];
    int i,j,k;
    for(i=1;i<=t;i++)
    {
       for(j=0;j<8;j++)
       {
           for(k=0;k<8;k++)
           {
               scanf("%c",&ch[j][k]);
                if(ch[j][k]>='a'&&ch[j][k]<='z')
                printf("%c",ch[j][k]);
           }

       }
       printf("\n");
    }
}
