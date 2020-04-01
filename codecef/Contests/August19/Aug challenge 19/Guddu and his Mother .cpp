#include<bits/stdc++.h>
using namespace std;
int main()
{

    long t;
    cin>>t;
    for(long  l=0;l<t;l++)
    {
        long n;
        cin>>n;
        long p=0;
        long a[n];
        for(long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long m[n]={0};
        long max2=INT_MIN;
        for(long i=0;i<n;i++)
        {
            m[i]=a[i];
            if(max2<m[i])
                max2=m[i];

        }
        for (long i=1;i<n;i++)
            a[i]=a[i]^a[i-1];
            long sum=0;
        long max1=INT_MIN;
        for(long i=0;i<n;i++)
        {
            if(max1<=a[i])
                max1=a[i];
        }
       // cout<<max1<<endl;
        vector<vector<long> >vect(max1+2);
        vect[0].push_back(-1);
        for(long i=0;i<n;i++)
        {
            vect[a[i]].push_back(i);
           // cout<<vect[i][i];
        }

        for(long i=0;i<max1+1;i++)
        {
            if(vect[i].size()>1)
            {
               // cout<<vect.size()<<endl;
               long ok=0;

            for(long j=0;j<vect[i].size();j++)
            {
                ok=ok+vect[i][j];
            }
                int notok=vect[i].size();
                for(int j=0;j<notok-1;j++)
                {
                    ok=ok-vect[i][j];
                    long z=vect[i][j]+1;
                    long x=notok-j-1;
                    sum=sum+ok-(x)*(z);
                }
            }
        }

        cout<<sum<<endl;

    }

}
