#include<stdio.h>
int main()
{
   int n,i,j;
   printf("Enter the size of array:") ;
   scanf("%d",&n);
   int num1[n];
   printf("First array: \n\n");
   for(i=0;i<n;i++)
   {
       printf("Element %d : ",i);
       scanf("%d",&num1[i]);
   }
   for(i=0;i<n;i++)
   {
       int count=1;
       for(j=i+1;j<n;j++)
       {
           if(num1[i]==num1[j])
            {
                count++;

            }

       }
       if(count==1)
        printf("%d occurs 1 times\n",num1[i]);
       else
       {
           if(num1[i]!=num1[j])
        printf("%d occurs %d times\n",num1[i],count);

       }

   }
}
