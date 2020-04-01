
#include<bits/stdc++.h>
using namespace std;

long sorts(long arr[],long n,long k)
{
    sort(arr+1,arr+n+1);
    reverse(arr+1,arr+n+1);
    //for(int i=1;i<=n;i++)
      //  cout<<arr[i]<<" ";

    long count=0;
    for(long i=1;i<=n;i++)
    {
        if(arr[k]<=arr[i])
            count++;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    long n,k;
    for(long i=0;i<t;i++)
    {
        cin>>n>>k;
        long arr[n];
        for(long i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        cout<<sorts(arr,n,k)<<endl;
    }

}
