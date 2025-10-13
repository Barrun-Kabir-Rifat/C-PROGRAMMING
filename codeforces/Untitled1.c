#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1;
    getline(cin,str);
    int i,j;
    for(i=0,j=0;i<str.size();i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
           str1[j]=str[i];
           j++;
        }
        else
        continue;
    }
    sort(str1.begin(),str1.end());
    for(j=0;j<str1.size();j++)
    {
        cout<<str1[j]<<" ";
    }

   return 0;
}
