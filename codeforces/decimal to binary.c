#include<stdio.h>
int main()
{
    int n;
    printf("Enter a decimal number:");
    scanf("%d",&n);
    int i=0,j,rem,a[50],count=0,flag=0,b[50];
    while(n!=0)
    {
        rem=n%2;
        n=n/2;
        a[i]=rem;
        i++;
        count++;
    }


    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);

    }
    for(j=0;j<count;j++)
    {
      b[j]=a[j];

    }

    printf("\n\n");
    for(i=0;i<count;i++)
    {
        printf("%d",a[i]);

    }

    for(i=0,j=0;i<count;i++,j++)
    {
       if(a[i]!=b[j])
       {

        flag++;

       }


    }
    printf(" %d %d",a[1],b[1]);

       if(flag!=0)
        printf("\nThe binary representation is not palindrome");
       else
        printf("\nThe binary representation is  palindrome");

}
