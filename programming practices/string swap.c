#include<stdio.h>
int main()
{
    char str1[15],str2[15],temp[15];
    printf("Enter first string: ");
    scanf("%s",&str1);

   printf("Enter second string: ");
   scanf("%s",&str2);
   strcpy(temp,str1);
   strcpy(str1,str2);
   strcpy(str2,temp);
   printf("String1 = %s\n",str1);
   printf("String2 = %s\n",str2);



}
