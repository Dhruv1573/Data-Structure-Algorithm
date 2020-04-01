#include<bits/stdc++.h>
using namespace std;


int main()
{

    string s;
    cin>>s;
    int sum=0,count=0;
    for(int i=0;i<s.length();i++)
    {
        sum+=(s[i]+s[i+1])-'0';
        if(s[i]=='A' || s[i]=='E'|| s[i]=='I'|| s[i]=='O' || s[i]=='U' ||s[i]=='Y')
            count++;

    }
    if(sum%2==0 || count!=0)
        cout<<"valid"<<endl;
    else
     cout<<"invalid"<<endl;

}
