#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   char code[a+b+1];
   int i,count=0,flag=0;
   for(i=0;i<=a+b;i++)
   {
       scanf("%c",&code[i]);
   }
   for(i=1;i<=a;i++)
   {
       if(code[i]>='0' && code[i]<='9')
        count++;
   }

   for(i=a+2;i<=b;i++)
   {
       if(code[i]>='0'&&code[i]<='9')
        flag++;
   }
   printf("%c %d %d ",code[a+1],count,flag);

   if((code[a+1]=='-') && count!=0 && flag!=0)
       printf("Yes");
   else
    printf("No");

}
