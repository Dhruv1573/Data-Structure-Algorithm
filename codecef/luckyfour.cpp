#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

string s;
for(int i=0;i<t;i++)
{
cin>>s;
int count=0;
for(int i=0;i<s.length();i++)
{



if(s[i]=='4')
count++;


}
cout<<count<<endl;
}
}
