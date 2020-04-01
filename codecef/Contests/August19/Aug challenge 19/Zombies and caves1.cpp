#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    for(long j=0;j<t;j++)
    {
        long n;
        cin>>n;
        long a[n],b[n],update[n+1]={0};
        for(long i=1;i<=n;i++)
            cin>>a[i];
        for(long i=1;i<=n;i++)
            cin>>b[i];
        long vect1[n+1]={0};
       // vector<long>vect2(n);
        for(long i=1;i<=n;i++)
        {
            long l=i-a[i];
            vect1[i]=l;
         // cout<<vect1[i]<<endl;
        }
         long arr[n+1]={0};
        for(long i=1;i<=n;i++)
        {
            long r=i+a[i];
            if(r>n)
                arr[i]=n;
            else
                arr[i]=r;
           // cout<<arr[i]<<endl;
        }
        for(long i=1;i<=n;i++)
        {
            if(vect1[i]<1)
                vect1[i]=1;
           // cout<<vect1[i]<<endl;
        }
        for(long i=1;i<=n;i++)
        {
            for(long j=vect1[i];j<=arr[i];j++)
            {
                update[j]++;
               // cout<<update[j]<<" "<<endl;
            }

        }


        sort(b,b+n);
        sort(update,update+(n+1));
        long f=0;
        for(long i=1;i<=n;i++)
        {
            if(update[i]!=b[i])
            {
                f=1;
                break;
            }

        }
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;


    }
}

