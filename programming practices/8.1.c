#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n=10,v1,v2,x[10],y[10];
 int total_x,total_y,total_xy,total_x2;
 float m,c,temp,temp1;

 printf("Enter the values for x: ");
 for(i=0;i<10;i++)
 {
 scanf("%d",&v1);
 x[i]=v1;
 }
 printf("Enter the values for y: ");
 for(i=0;i<10;i++)
 {
 scanf("%d",&v2);
 y[i]=v2;
 }
 total_x=total_y=total_xy=total_x2=0;
 for(i=0;i<10;i++)
 {
 total_x=total_x+x[i];
 total_y=total_y+y[i];
 total_xy=total_xy+(x[i]*y[i]);
 total_x2=total_x2+(x[i]*x[i]);
 }
 temp= total_x*total_y;
 temp1=total_x*total_x;
 m=((n*total_xy)-(temp))/((n*total_x2)-temp1);
 c=((total_y)-(m*total_x))/n;
 printf(" \nThe equation of the straight line is: ");
 printf(" Y=%fX+%f",m,c);
 getch();
}
