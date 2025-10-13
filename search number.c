#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number that you want to search:");
    scanf("%d",&n);
    search(n);

}
void search(int n)
{
    int num[6]={1,2,3,4,5,6};
    int i,count=0;
    for(i=0;i<6;i++)
    {
        if(num[i]==n){
         count++;
         break;
        }

    }
    if(count==0)
        printf("Number not found");
    else printf("Number is found");


}
