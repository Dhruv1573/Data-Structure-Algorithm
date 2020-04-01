#include<bits/stdc++.h>
using namespace std;
long long mod=10e9+7;
/*
long long fact(long long n)
{
    long long prod=1;
    for(int i=1;i<=n;i++)
    {
        prod=((prod%mod)*(i%mod))%mod;
    }
    return prod%mod;
}
*/
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];

    }
    vector<long long>vect;

    for(int i=1;i<=n;i++)
    {
        long long prod=1;
        int x=arr[i];
      //  cout<<x<<" ";
        for(int j=1;j<=x;j++)
            prod=((prod%mod)*j%mod)%mod;


        vect.push_back(prod);

    }

    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int l,r;
        cin>>l>>r;
        if(l==r)
            cout<<1<<endl;
        else
        {
        long long ans=1;
        for(int j=l;j<=r;j++)
        {
            ans=(ans*(vect[j-1])%mod)%mod;
        }
      //  cout<<ans<<endl;

        cout<<((int)pow(ans,(r-l)))%mod<<endl;
        }

    }
}
