#include<iostream>
using namespace std;
int main()
{
    int marks;
     while(1){
    cout<<"Enter marks:";
    cin>>marks;
    if(marks>100 ||marks<0)
        cout<<"Invalid input:"<<endl;
    else if(marks>=90)
    {
        cout<<"Grade A"<<endl;
    }
     else if(marks>=80)
    {
        cout<<"Grade B"<<endl;
    }
     else if(marks>=70)
    {
        cout<<"Grade c"<<endl;
    }
     else if(marks>=60)
    {
        cout<<"Grade D"<<endl;
    }
    else
    {
        cout<<"Grade F"<<endl;
    }
    }

  return 0;
}
