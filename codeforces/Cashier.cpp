#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,a;
    cin>>n>>l>>a;

    int t,b;
    int ans=0,z=0;
    for(int i=0;i<n;i++)
    {
        cin>>t>>b;

        ans+=(t-z)/a;
        z=t+b;
    }
   // cout<<ans<<endl;
    //cout<<z<<endl;
    ans+=(l-z)/a;
    cout<<ans;
}

