#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long n,a,b,k;
    for(long long i=0;i<t;i++)
    {
        cin>>n>>a>>b>>k;
        long long p=n/a;
        long long q=n/b;
        long long r=__gcd(a,b);
        long long s=(a*b)/r;
        long long t=n/s,count=0;

      //  for(long long i=s;i<=n;i*=s)
        //    count++;
          //  cout<<count<<endl;
        //cout<<p<<q<<endl;
        if(b%a==0)
        {
            if(((p-t)+(q-t))>=k)
                cout<<"Win"<<endl;
            else
                cout<<"Lose"<<endl;
        }
        else if(a%b==0)
        {
            if(((p-t)+(q-t))>=k)
                cout<<"Win"<<endl;
            else
                cout<<"Lose"<<endl;
        }
        else
        {
            if(((p-t)+(q-t))>=k)
                cout<<"Win"<<endl;
            else
                cout<<"Lose"<<endl;
        }
        //cout<<(p-count)+(q-count)<<endl;
    }
    //cout<<__gcd(4,2)<<endl;

}
