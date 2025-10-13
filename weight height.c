
//counting number of boys w<50& h>170
#include<stdio.h>
int main()
{
    int weight,height,count=0;
    printf("Enter weight:");
    scanf("%d",&weight);
    printf("enter height:");
    scanf("%d",&height);
    if (weight<50&&height>170)
    {
        count++;
    }
    printf("\ncount=%d",count);
    getch();

}

