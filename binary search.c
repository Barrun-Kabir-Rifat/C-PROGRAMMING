#include<stdio.h>
int main()
{
    int marks[5]={89,56,78,86,90},n,i,pos;
    printf("Enter the value you want to search:");
    scanf("%d",&n);
    int position=-1;

    for(i=0;i<5;i++)


    {
        if(n==marks[i])
        {


            pos=i+1;
            break;
        }
    }
    if(position==-1)
       printf("number not found");
    else
        printf("number found at %d position",pos);
}
