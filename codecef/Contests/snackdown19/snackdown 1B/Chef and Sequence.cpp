#include<bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin>>t;
    long n,k;
    for(long i=0;i<t;i++)
    {
        cin>>n>>k;
        long a[n];
        long sum1=0,sum2=0;
        for(long i=0;i<n;i++)
        {
            cin>>a[i];
              sum1+=a[i];
            sum2+=pow(a[i],2);
        }
       // cout<<sum1<<sum2<<endl;
        sort(a,a+n);
        long sum3=0,sum4=0;
        if(sum1<sum2)
        {
       // cout<<sum1<<sum2;

        for(long i=n;i>0;i--)
        {
            if(k>=0)
            {
            if(a[i]>1)
                a[i]=1;
            }
            k--;
        }
        for(long i=0;i<n;i++)
        {
          // cout<<a[i]<<" ";
            sum3+=pow(a[i],2);
            sum4+=a[i];
        }
        //cout<<sum3<<sum4<<endl;
        if(sum3<=sum4)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;

       // if(sum1>=sum2)
         //   cout<<"YES"<<endl;
        //else
           // cout<<"NO"<<endl;


    }



}
