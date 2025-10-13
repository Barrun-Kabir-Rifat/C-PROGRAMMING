
#include<stdio.h>
int main()
{
    int id,serial,a,b,dept,semester,year;
    printf("Enter your Id here:");
    scanf("%d",&id);
    serial = id%1000;
    a=id/1000;
    dept=a%10;
    b=a/100;
    semester=b%10;
    year=b/10;
    printf("your admission year is 20%d\n",year);
    {
    if(semester==1)
        printf("Semester = Spring\n");
    else if(semester=2)
        printf("Semester = Summer\n");
    else if(semester==3)
        printf("Semester= Fall\n");
    }
    if(dept==3)
        printf("Department of Computer Science Engineering\n");
    else if(dept==5)
        printf("Department of Civil Engineering \n");
    else if(dept==6)
        printf("Department of EEE \n");
    else if(dept==9)
        printf("Department of Agriculture\n ");
    else if(dept==1||dept==2||dept==4||dept==7||dept==8)
        printf("Department of XYZ \n");
    }
    printf("Serial no = %d",serial);
}
