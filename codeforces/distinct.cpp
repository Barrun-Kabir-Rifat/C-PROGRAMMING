#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n)
{
    int i,j,count=0;
    for(i=0;i<n;i++)
    {
       if(arr[i]!=arr[i-1])
        count++;
    }
    cout<<count;
}
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    solve(arr,n);
}
