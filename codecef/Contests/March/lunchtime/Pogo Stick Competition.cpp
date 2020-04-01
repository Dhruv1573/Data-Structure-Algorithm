#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   while(t--)
    {

       int n,k;
       cin>>n>>k;

      if(n<=1000)
      {


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


  else
  {



       int arr[n];
       for(int i=0;i<n;i++)
       cin>>arr[i];
      int brr[n]={INT_MIN};
     int ans=INT_MIN;
       for(int i=0;i<n;i++)
       {
           if(i-k>=0)
           {
               brr[i]=max(arr[i],(brr[i-k]+arr[i]));
           }
           else
          brr[i]=max(arr[i],brr[i]);
       }
     int max=INT_MIN;
       for(int i=n-k;i<n;i++)
         {
          //   cout<<brr[i]<<" ";
            if(max<brr[i])
            max=brr[i];
         }
    cout<<max<<endl;
    }
    }

}
