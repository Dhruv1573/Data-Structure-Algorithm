#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  t;
    cin>>t;
    long long n,k;
    for(long long i=0;i<t;i++)
    {
        cin>>n>>k;

        long long a[n],count=0;

        for(long long i=1;i<=n;i++)
        {
            cin>>a[i];
            //cout<<a[i]<<" ";
        }

        sort(a+1,a+n+1);

        reverse(a+1,a+n+1);


        for(long long i=1;i<=n;i++)
        {
          //  cout<<a[i];
       if(a[i]>=a[k])
            count++;

        }
        cout<<count<<endl;
    }
}
