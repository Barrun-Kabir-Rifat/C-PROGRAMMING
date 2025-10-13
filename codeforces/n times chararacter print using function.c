#include<stdio.h>
void display()
{
    int t,a,i,j;
    char ch;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %c",&a,&ch);
        for(j=1;j<=a;j++)
        {
            printf("%c ",ch);
        }
        printf("\n");
    }
}
int main()
{
   display() ;
}
