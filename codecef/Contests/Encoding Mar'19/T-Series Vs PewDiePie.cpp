#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        string s;
        cin>>n>>s;

        if(n%2==0)
        {
            if(s[0]=='T')
                cout<<"T-Series"<<endl;
            else
                cout<<"PewDiePie"<<endl;
        }
        else
        {
            if(s[0]=='P')
             cout<<"T-Series"<<endl;
            else
                cout<<"PewDiePie"<<endl;
        }
    }
}
