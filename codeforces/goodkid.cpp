#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int min=arr[0];
        for(i=0;i<n;i++)
        {
            if(arr[i]<=min)
            {
               min=arr[i];
               p=i;
            }
        }
        unsigned long long int product=1,finalproduct;
        for(i=0;i<n;i++)
        {
            if(i==p)
            continue;
          product=product*arr[i];
        }
        finalproduct=(min+1)*product;
        cout<<finalproduct<<endl;

    }
}

