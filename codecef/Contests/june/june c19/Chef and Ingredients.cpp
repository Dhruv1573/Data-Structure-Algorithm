#include<bits/stdc++.h>
using namespace std;
long long mod=10e9+7;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        unsigned long long int n,k;
        cin>>n>>k;
        int p=2;
       unsigned long long int a=k-1;
        unsigned long long int diff=n-1;
        unsigned long long int l=a%diff;
        unsigned long long int tl=((a-l+diff)/diff);
        unsigned long long int ans=((((tl%mod)*((a%mod)+(l%mod))%mod)%mod)/2)%mod;
        cout<<ans%mod<<endl;

     //   unsigned long long int p=2;
        //cout<<z<<endl;
       // long long x=(double)(z*((2*a)-((z-1)*diff))%mod)/p;
      //  unsigned long long int ans=ceil(x);
       /* while(a>0)
        {
            ans+=a;n
            a=a-diff;
        }
        */
        //cout<<ans%mod<<endl;

    }
}

/*
mod=10**9+7
t=int(input())
for i in range (t):
    n,k = [int(x) for x in input().split()]
    a=k-1
    d=n-1
    l=a%d
    x=(a-l+d)//d
    y=(x*(a+l))//2
    print(int(y%mod))
    */
