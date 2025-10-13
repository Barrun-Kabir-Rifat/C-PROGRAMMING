#include<stdio.h>
int main()
{
    unsigned int n,k,a;
    scanf("%u% %u% u",&n,&k,&a);
    unsigned int x=(n*k)/a;
    unsigned int y=(n*k)%a;

        if(y==0&&x<=2147483647)
            printf("int");
        else if(y==0&&x>2147483647)
            printf("long long");
        else
        printf("double");
}
