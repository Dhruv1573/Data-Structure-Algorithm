#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    long n;
    for(long i=0;i<t;i++)
    {
        cin>>n;
        long a[n],max=0,sum=0;
        for(long i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(max<a[i])
                max=a[i];

        }
        cout<<sum-n+1<<endl;
    }
}
