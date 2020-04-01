#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int len=s.length();
        if(s[len-1]=='*' && s[0]!='*')
            cout<<"Regular since Childhood."<<endl;
        else
            cout<<"Irregular since Childhood."<<endl;
    }
}
