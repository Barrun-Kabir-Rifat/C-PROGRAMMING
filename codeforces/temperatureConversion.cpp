#include<iostream>
using namespace std;
void CelToFar()
{
    float c,F;
    cout<<"Enter temperature in celsius:";
    cin>>c;
    F=((c*9)/5.0)+32;
    cout<<"Temperature in Fahrenheit is ="<<F<<endl;
}
void FahToCel()
{
    float f,C;
   cout<<"Enter temperature in fahrenheit:";
   cin>>f;
   C=((f-32)*5.0)/9;
   cout<<"Temperature in Celsius is ="<<C<<endl;
}
int main()
{
    int n;

    cout<<"1.Celsius to fahrenheit\n2.Fahrenheit to celsius"<<endl;
    cout<<"Enter your choice:";
    cin>>n;
    switch(n)
    {
    case 1:
        {
           CelToFar();
            break;

        }
    case 2:
        {
           FahToCel();
            break;
        }
    }
  return 0;
}
