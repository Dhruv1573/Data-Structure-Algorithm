
#include<bits/stdc++.h>
using namespace std;

bool finda(int a,int b)
{
    return a>b;
}


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k,x;
        cin>>n;
        long a[n],b[n],sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
           // b[i]=a[i];
            sum+=a[i];
        }
        cin>>k>>x;
       
        for(int i=0;i<n;i++)
        {
            int xo=a[i]^x;
            int d=xo-a[i];
            b[i]=d;
        }
        sort(b,b+n,finda);
        //reverse(b,b+n);
         if(n==k)
        {
            
            long sum1=0;
            for(int i=0;i<n;i++)
            {
             sum1+=b[i];
            }
            if(sum1>0)
            sum=sum+sum1;
            
            //cout<<endl;
        }
        else
        {

            if(k%2!=0)
            {

                long sum3=0;
                for(int i=0;i<n;i++)
                {
                    if(b[i]>0)
                    {
                        sum+=b[i];
                    }
                    else
                        break;

                }
                sum+=sum3;
            }
            else
            {
                long sum2=0;
                for(int i=0;i<n-1;i+=2)
                {
                    if(b[i]+b[i+1]>0)
                        sum2+=b[i]+b[i+1];
                    else
                        break;
                }
                sum+=sum2;
            }
        }
        cout<<sum<<endl;

    }
}
