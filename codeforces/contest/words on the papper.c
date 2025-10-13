#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    char ch[8][8];
    int i,j,k;
    for(i=1;i<=t;i++)
    {
       for(j=0;j<8;j++)
       {

               scanf("%s",&ch[j]);

       }
       for(j=0;j<8;j++)
       {
           for(k=0;k<8;k++)
           {
               if(ch[j][k]!='.')
                printf("%c",ch[j][k]);
           }
       }
       printf("\n");
    }
}

