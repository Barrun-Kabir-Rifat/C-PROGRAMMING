#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1;
    getline(cin,str);
    int i,j=0;
    for(i=1;i<str.size()-1;i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
           str1[j]=str[i];
           j++;

        }
        else
        continue;
    }
    cout<<str1;
   // sort(str1.begin(),str1.end());
    //for(j=0;j<str1.size();j++)
    //{
        cout<<str1[j]<<" ";
   // }

   return 0;
}
