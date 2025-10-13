#include<stdio.h>

int main()
{
    unsigned long long int n,i;
    scanf("%llu",&n);
     int count=0;
     if(n==1)
     {
         printf("NO");
         return 0;
     }
    for(i=2;i*i<=n;i++)
    {

        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
        printf("YES");
    else
        printf("NO");
    return 0;

}
