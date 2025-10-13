#include<stdio.h>
int main()
{
    int num,arr[10]={0,10,15,20,25,30,35,40,45,50};// in binary search, array must be sorted
    printf("Enter the number you want to search:");
    scanf("%d",&num);
    int left=0,right=9;  //index number

    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==num)
        {
            printf("The number found at index %d",mid);
            return 0;
        }
        else if(num>arr[mid])
            left=mid+1;
        else if(num<arr[mid])
           right=mid-1;

    }
    printf("Item not found");
}
