#include<bits/stdc++.h>
using namespace std;


int main()
{
  int limit=pow(10,8);
        bool isPrime[limit+1];
        memset(isPrime,true,sizeof(isPrime));
        int i,j;

        for (i=2;i<=limit;i++)
        {
            isPrime[i]=true;
        }

        for (i=2;i*i<=limit;i++)
        {
            if(isPrime[i]==true)
            {
                for(j=i;i*j<=limit;j++)
                {
                    isPrime[i*j]=false;
                }
            }
        }

    long long t;
    cin>>t;
    long long n;
    for(i=0;i<t;i++)
    {
        cin>>n;
        i=2;
            long sum=0;
            long count=1;
            while(count<=n)
            {
                if(isPrime[i]==true)
                {
                    count++;
                    sum+=i;
                }
                i++;

            }

        cout<<sum<<endl;
    }
}


