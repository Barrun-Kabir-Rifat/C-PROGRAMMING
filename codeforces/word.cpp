#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    long long int i,count=1;
    for(i=0;i<str.size();i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    cout<<count<<endl;
}
