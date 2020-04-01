#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long count =0;
    long long k=0;
    for(long long i=0;i<n-2;i++)
    {
                if(a[i]+a[i+1]>a[i+2])
                {
                    cout<<"YES"<<endl;
                        count=1;
                        break;

                }

    }
    if(count==0)
        cout<<"NO"<<endl;

}
