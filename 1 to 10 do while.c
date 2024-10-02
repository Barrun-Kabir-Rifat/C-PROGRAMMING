#include<stdio.h>
int main()
{
    int i=1,sum=0;
    do
    {
        sum=sum+i;
        i++;

    }while(i<=10);
    printf("Sum of 1 to 10 = %d",sum);
}

