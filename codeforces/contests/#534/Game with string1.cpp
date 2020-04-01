#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0,k=0;
    for(int i=0;i<s.length();i++)
    {
    if(s[i]==s[i+1])
    {
        s.erase(i,i+1);
        count++;
    }
    s=s.erase(i,i+1);
    s[k]='\0';
    }
    if(count%2==0 )
        cout<<"No";
    else if(count%2!=0)
        cout<<"Yes";
}
