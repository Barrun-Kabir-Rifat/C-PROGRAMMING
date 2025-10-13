#include<stdio.h>
int main()
{
    int merit[10]={23,22,6,15,44,9,48,11,4,48};
    int serial,i,pos,position=-1;
    printf("Enter your serial no here:");
    scanf("%d",&serial);
    for(i=0;i<10;i++)
      if (merit[i]==serial)
      {
            pos=i+1;
            break;
    }

     if(pos>0&&pos<=10)
    printf("you are at position %d",pos);

else if(position==-1)
        printf("You are not in the list");

}


