#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,q;
    cin>>n>>q;
    long long a[n],b[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    long long l,r;
    for(long long i=0;i<q;i++)
    {
        cin>>l>>r;
    long long start=l-1,last=r-1;
    while(start<last)
    {
        long long temp=a[start];
        a[start]=a[last];
        a[last]=temp;
        start++;
        last--;
    }

    long long s=0,p=0;
    for(long long i=0;i<n;i++)
    {
        s=max(a[i],a[i]+s);

        p=max(p,s);

    }
     // for(int i=0;i<n;i++)
       // cout<<a[i];
    for(long long i=0;i<n;i++)
        a[i]=b[i];

   cout<<p<<endl;
    }
}
