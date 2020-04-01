#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long a[n],b[m];

    long long maximum=INT_MIN,minimum=INT_MAX,max_i,min_i;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<minimum)
        {
            minimum = a[i];
            min_i=i;
        }
    }

    for(long long i=0;i<m;i++)
    {
        cin>>b[i];
        if(b[i]>maximum)
        {
            maximum = b[i];
            max_i=i;
        }
    }
    unordered_map<long,long>maps;
    long long l = m+n-1;
    //bool stop = false;

    /*for(int i=0;i<n;i++)
        cout<<arr[i];*/
        for(long long i=0;i<m;i++)
        {
            long sum=a[min_i]+b[i];
            if(maps[sum]==0)
            {
                maps[sum]=1;
                cout<<min_i<<" "<<i;
            }
            cout<<endl;

        }
        for(long long i=0;i<n;i++)
        {
            long sum=b[max_i]+a[i];
            if(maps[sum]==0)
            {
                maps[sum]=1;
                cout<<i<<" "<<max_i;
            }
            cout<<endl;

        }
}
