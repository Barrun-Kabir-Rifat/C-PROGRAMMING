#include<stdio.h>
int main()
{
    long long int A[100000],n,i;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&A[i]);
    }

    for(i=0;i<n;i++)
    {
        if(A[i]<=10)
            printf("A[%lld] = %lld\n",i,A[i]);

    }

}

