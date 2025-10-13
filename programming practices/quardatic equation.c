#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the value of a, b, c :");
    scanf("%f%f%f",&a,&b,&c);
    float d=(b*b-4*a*c);
    switch(d>0)
    {
    case 1:
        {
            float x1=(-b+sqrt(d))/2*a ;
            float x2=(-b-sqrt(d))/2*a ;
            printf("x1=%f\nx2=%f",x1,x2);
            break;
        }
    case 0:
        {
            switch(d==0)
            {
            case 1:
                {
                float x1=-b/2*a ;
                float x2=-b/2*a ;
                printf("x1=%f\nx2=%f",x1,x2);
                break;
                }
             case 0:
                 {
                     printf("The roots are imaginary");
                     break;
                 }
            }


        }

    }

}
