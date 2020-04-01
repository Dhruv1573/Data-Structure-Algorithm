#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        int len=s.length();
        if(len==n)
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0'&&s[i+1]=='0')
                {
                    count++;
                    i+=1;
                }

            }
        }
        cout<<count<<endl;
    }
}
