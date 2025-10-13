<<<<<<< HEAD
#include<stdio.h>
int main()
{
 int arr1[5]={5,2,3,4,5};
 int arr2[5],i;
 int *ptr1,*ptr2;
 ptr1=&arr1[0];
 ptr2=&arr2[0];
 for(i=0;i<5;i++)
 {
     *ptr2=*ptr1;
     ptr1++;
     ptr2++;

 }
 for(i=0;i<5;i++)
 {
     printf("%d ",arr2[i]);

 }

}
=======
#include<stdio.h>
int main()
{
 int arr1[5]={5,2,3,4,5};
 int arr2[5],i;
 int *ptr1,*ptr2;
 ptr1=&arr1[0];
 ptr2=&arr2[0];
 for(i=0;i<5;i++)
 {
     *ptr2=*ptr1;
     ptr1++;
     ptr2++;

 }
 for(i=0;i<5;i++)
 {
     printf("%d ",arr2[i]);

 }

}
>>>>>>> bb8da398e4f4e8845321aedb5f01da57f4b7676f
