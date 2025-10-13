#include<stdio.h>
int power(int x, int n)
{

    if(n==0)
        return 1;
    int temp=power(x,n/2);
    if(n%2==0)
        int result= temp*temp;
    else
        result= x*temp*temp;
        return result;

}
int main()
{
    int x,n;
    scanf("%d%d",&x,&n);
    printf("Power=%d",power(x,n));
}
