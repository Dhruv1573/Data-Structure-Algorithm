#include<bits/stdc++.h>
using namespace std;
#define MOD 998244353
using namespace std;
long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power > 0) {

        if(power % 2 == 1)
            {
            result = (result*base) % MOD;
            }
            base = (base * base) % MOD;
            power = power/2;
    }
    return result;
}
long printNcR(long n, long r)
{

    long long p = 1, k = 1;
    if(n<r)
        return 0;
    n=n%MOD;
    r=r%MOD;
    if (n - r < r)
        r = (n - r);

    if (r != 0) {
        while (r) {
            p =(p*n)%MOD;
            k=(k*r)%MOD;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;

            n=n-1;
            r=r-1;

        }

    }

    else
        p = 1;

    return p%MOD;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       // cout<<fast_power(10,0)<<endl;
       //cout<<printNcR(10,2)<<endl;
        int n,p,r;
        cin>>n>>p>>r;
        long long ans=0,z,x;
        for(int i=0;i<=n;i++)
        {
            if(i==0)
                z=1;
            else
             z=fast_power(p,i);

       //      cout<<z<<endl;
             x=(printNcR(z,r)%MOD)%MOD;
            ans=(ans+x)%MOD;
         //       cout<<x<<endl;
        }
        cout<<ans<<endl;

    }

}
