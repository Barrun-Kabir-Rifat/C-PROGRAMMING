#include<iostream>
using namespace std;
void division(unsigned long long int a,unsigned long long int b)
{
   long long int count=0;

      while(1)
      {
        if(a%b==0)
        {
          cout<<count<<endl;
          break;
        }
        a++;
        count++;
      }
}
int main()
{
    int t;
    cin>>t;
    unsigned long long int a,b,count;
    while(t--)
    {
      cin>>a>>b;
      division(a,b);
    }
}
