#include<bits/stdc++.h>
using namespace std;
int main()
{
     long t;
    cin>>t;
     long n,q;
    for(long i=0;i<t;i++)
    {
        cin>>n>>q;
         long a[n];
        long sum=0;
        for(long i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
         long k;
        for(long i=0;i<q;i++)
        {
            cin>>k;

            if(k==0)
                cout<<sum<<endl;
            else
            {
                long ans=0;
                for(long i=0;i<n;i=i+1+k)
                    ans+=a[i];
                cout<<ans<<endl;
            }
        }
    }

}
