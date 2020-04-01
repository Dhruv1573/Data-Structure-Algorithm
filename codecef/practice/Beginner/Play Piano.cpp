#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    string s;
    for(int i=0;i<t;i++)
    {
        int count=0;
        cin>>s;
        for(int i=1;i<=s.length();i++)
        {
            if(s[i]!=s[i+1])
            {
                count++;
            }

        }
        cout<<count<<endl;
        if(count==0)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;

    }
}
