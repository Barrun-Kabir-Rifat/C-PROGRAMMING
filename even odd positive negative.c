#include<stdio.h>
int main()
{
    int n,i,num[1500];
    int even=0,odd=0,positive=0,negative=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]%2==0)
        {
            even++;
        }

         if(num[i]%2!=0)
            {
             odd++;
            }
        if(num[i]>0)
        {
            positive++;
        }
        if(num[i]<0)
        {
            negative++;
        }

    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",positive);
    printf("Negative: %d\n",negative);


}
