#include<stdio.h>
int main()
{
    int n,sum=0,product=1,rem,count=0;
    float avg;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem = n%10;
        sum=sum+rem;
        product=product*rem;
        n=n/10;
        count++;
    }
    avg=(float)sum/count;
    printf("\nProduct of the digits of the number = %d\n\n",product);
    printf("Average of the digits of the number = %f",avg);
    getch();

}
