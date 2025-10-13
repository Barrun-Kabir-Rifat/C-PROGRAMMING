#include <stdio.h>

void main()
{
    int arr[100], fre[100];
    int n, i, j, count;

       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
       for(i=0;i<n;i++)
            {

	      scanf("%d",&arr[i]);
          fre[i]=-1;
	    }
    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                fre[i]=0;
            }
        }

        if(fre[i]!=0)
        {
            fre[i] = count;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(fre[i]!=0)
        {
            printf("%d occurs %d times\n", arr[i], fre[i]);
        }
    }
}
