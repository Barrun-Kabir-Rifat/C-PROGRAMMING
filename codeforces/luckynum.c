#include<stdio.h>
int main()
{
    int a,b,i,count,c,d,e,f,g,h,m,n,o,p,q;
    scanf("%d %d",&a,&b);
     count=0;
    for(i=a;i<=b;i++)
    {
        c=i%10;
        d=i/10;
        e=d%10;
        f=d/10;
        g=f%10;
        h=f/10;
        m=h%10;
        n=h/10;
        o=n%10;
        p=n/10;
        q=p%10;

    if(i<10)
        {
            if((c==4)||(c==7)){

                printf("%d ",i);
                count++;}
        }
    else if(i<100)
    {
        if(((c==4)||(c==7))&&((e==4)||(e==7))){
            printf("%d ",i);
            count++;}
    }
    else if(i<1000)
    {
        if(((c==4)||(c==7))&&((e==4)||(e==7))&&((g==4)||(g==7))){
            printf("%d ",i);
            count++;}
    }
    else if(i<10000)
    {
        if(((c==4)||(c==7))&&((e==4)||(e==7))&&((g==4)||(g==7))&&((m==4)||(m==7)))
            {
            printf("%d ",i);
            count++;}
    }
    else if(i<100000)
    {
        if(((c==4)||(c==7))&&((e==4)||(e==7))&&((g==4)||(g==7))&&((m==4)||(m==7))&&((o==4)||(o==7)))
           {
            printf("%d ",i);
            count++;}
    }
    else if(i<1000000)
    {
        if(((c==4)||(c==7))&&((e==4)||(e==7))&&((g==4)||(g==7))&&((m==4)||(m==7))&&((o==4)||(o==7))&&((q==4)||(q==7))){
            printf("%d ",i);
            count++;}
    }

    }
    if(count==0)
        printf("-1");


}

