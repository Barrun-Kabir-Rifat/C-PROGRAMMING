#include<stdio.h>
int main()
{
    int L1,R1,L2,R2;
    scanf("%d %d %d %d",&L1,&R1,&L2,&R2);
  if(L2>=L1&&L2<R1&&R2<=R1)
        printf("%d %d",L2,R2);
  else if(L1>=L2&&L1<R2&&R1<=R2)
        printf("%d %d",L1,R1);
  else if(L1>=L2 && L1<=R2)
        printf("%d %d",L1,R2);
  else if(L2>=L1 && L2<=R1)
       printf("%d %d",L2,R1);
   else
        printf("-1");

}
