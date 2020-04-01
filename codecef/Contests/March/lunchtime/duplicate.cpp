#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   while(t--)
    {

       long long n,k;
       cin>>n>>k;
       long long arr[n];
       for(long long i=0;i<n;i++)
       cin>>arr[i];
        long long ans=INT_MIN;
       for(long long i=0;i<n;i++)
       {
           long long sum=0;
           for(int j=i;j<n;j=j+k)
           {
             sum=sum+arr[j];

           }
          // cout<<endl;
           if(sum>ans)
           ans=sum;
       }
    cout<<ans<<endl;
    }

}
