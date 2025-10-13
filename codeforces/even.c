#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter the range:");
    scanf("%d%d",&a,&b);
    i=a;
    printf("\nEven:\n");
    while(i<=b)
    {
      if(i%2==0)
      printf("%d ",i);
    i++;
    }
    getch();
}
