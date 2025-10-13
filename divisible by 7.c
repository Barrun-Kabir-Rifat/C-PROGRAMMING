#include<stdio.h>
int main()
{
    int i;
    printf("Numbers that are divisible by 7 among 1 to 100:\n\n");
    for(i=1;i<=100;i++)
    {
        if(i%7==0)
        printf("%d ",i);
    }
    getch();
}
