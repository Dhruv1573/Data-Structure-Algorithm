#include<bits/stdc++.h>
using namespace std;
long long mod=10000000000+7;
int main()
{
    int t;
    cin>>t;
    for(long long i=0;i<t;i++)
    {
        long long n,k,m;
        cin>>n>>k>>m;
        long long r=0;
        long long x=m/2,y=m%2;
        long long p=0,q=0;
        if(y>0)
        {
            p=(long long)(pow(n-1,x+1))%mod;
            q=(long long)(pow(n%mod, (x+1)%mod))%mod;
        }
        else
        {
            p=(long long)(pow((n-1)%mod,x%mod))%mod;
            q=(long long)(pow(n%mod,x%mod))%mod;
            r+=1;
        }

        if(r==1)
        {
            p=(p*(n+k-1))%mod;
            q=(q*(n+k))%mod;
        }
        p=(q-p+mod)%mod;
        long long z=__gcd(p,q);
        p=p/z;
        q=q/z;
        long long ans=((p%mod)*(((long long)(pow(q,mod-2))%mod)%mod))%mod;
        cout<<ans<<endl;
    }
}
