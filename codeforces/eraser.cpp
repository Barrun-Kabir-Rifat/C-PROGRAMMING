#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j,count;
    cin>>t;
    string str;
    while(t--)
    {
        cin>>n>>k;
        cin>>str;
        count=0;
        for(i=0;i<n;i++)
        {
                if(str[i]=='B')
                {
                    count++;
                    i=i+(k-1);
                }
        }
        cout<<count<<endl;
    }
}
