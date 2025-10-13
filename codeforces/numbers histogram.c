#include<stdio.h>
int main()
{
    int n,num,i,j;
    char ch;
    scanf("%c",&ch);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        for(j=1;j<=num;j++)
        {
            if(ch=='+')
                printf("+");
            if(ch=='-')
                printf("-");
            if(ch=='*')
                printf("*");
            if(ch=='/')
                printf("/");
        }
     printf("\n");
    }
}
