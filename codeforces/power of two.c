#include<stdio.h>
int main()
{
    unsigned long long int n,i;
    scanf("%llu",&n);
    unsigned long long int result=1,count=0;
    for(i=1;i<50;i++)
    {
        result=pow(2,i);
        if(result==n)
        {
            count=1;
            break;
        }
    }
    if(count==1)
        printf("YES");
    else
        printf("NO");
    return 0;

}
