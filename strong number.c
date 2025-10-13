#include<stdio.h>
int fact(int n)
{
    int i,facto=1;
    for(i=1;i<=n;i++)
    {
      facto=facto*i;
    }
    return facto;
}
int main()
{
    int i,j,rem;
    for(i=1;i<10000;i++)
    {
        int temp=i;
        int factorial=0;
        while(temp!=0)
        {
           rem=temp%10;
           factorial=factorial+ fact(rem);
           temp=temp/10;
        }
        if(i==factorial)
            printf("%d ",i);
    }
}
