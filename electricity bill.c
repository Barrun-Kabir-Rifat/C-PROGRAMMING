#include<stdio.h>
int main()
{
    float unit,totalBill,cost;
    printf("Enter total unit:");
    scanf("%f",&unit);
    if(unit<=50)
    {
        cost=(unit*0.50);

    }
    else if(unit<=150)
    {
        cost=(50*0.50)+(unit*0.75)-(50*0.75);

    }
   else if(unit<=250)
    {
        cost=(50*0.50)+(100*0.75)+(unit*1.20)-(150*1.20);

    }
    else if(unit>250)
    {
        cost=(50*0.50)+(100*0.75)+(100*1.20)+(unit*1.50)-(250*1.50);
    }
    totalBill=cost+(cost*0.2);
    printf("Total electricity bill:%f",totalBill);

}
