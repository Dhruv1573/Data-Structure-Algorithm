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
        int count=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='4')
                count++;
        }
        cout<<count<<endl;

    }
}
