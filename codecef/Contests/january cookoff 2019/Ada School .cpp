#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,m;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        if((n*m)%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

