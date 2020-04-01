#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        int p=s.length();
        if(p<=10)
            cout<<s<<endl;
        else
        {
            int z=p-2;
            cout<<s[0]<<z<<s[p-1]<<endl;

        }
    }
}
