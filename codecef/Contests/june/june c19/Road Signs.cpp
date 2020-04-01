//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;
long long mod=10e9+7;
/*
long power(long y)
{

    long long res = 1;
    int x=2;


    x = x %mod;

    while (y > 0)
    {
        if (y & 1)
            res = (res*x)%mod;

        y = y>>1; // y = y/2

        x = (x*x) %mod;

    }

    return res;
}
*/

int main()
{
    int t;
cin>>t;
for(int i=0;i<t;i++)
{
long n;
cin>>n;
long long p=5*(long long)(pow(2,n,mod)%mod;
//long long ans=(5*p);
cout<<p<<endl;
}
}
/*
mod=10**9+7
t=int(input())
for i in range (t):
    n=int(input())
    ans=(5*pow(2,n,mod))%mod
    print(ans)
    */
