#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    long long n,x;
    for(long long i=0;i<t;i++)
    {
        cin>>x>>n;
        long long z,sum=0,k=1;
        n=n-1;
        for(long long i=x;i<=n;i++)
        {
            if(i%x==0)
                sum+=i;

           // k++;
        }
        cout<<sum<<endl;

    }
}
