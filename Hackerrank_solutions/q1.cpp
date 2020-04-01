#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    string s;
    int count=1;
    for(int i=0;i<n;i++)
    {
        cin>>s;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]==s[i+1])
            {
                count++;

            }

            //else if()

        }
        cout<<s<<count;

    }
}
