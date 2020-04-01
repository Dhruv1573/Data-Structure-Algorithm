#include <bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
    for(int i=0;i<t;i++)
    {
    int n;
    cin>>n;
    int arr[n+2];
    int added[n+2]={0};
    for(int i=2;i<=n+1;i++)
      cin>>arr[i];
    int cnt=0;
    for(int i=2;i<=n+1;i++)
      if(arr[i]<0)
        cnt++;
     if(cnt==n)
     {
       int minimum=0;
        for(int i=2;i<=n+1;i++)
            minimum=min(minimum,arr[i]);
       cout<<minimum<<endl;
     }
     else
    {
        int dp[n+2]={0};
        for(int i=2;i<=n+1;i++)
        {
            dp[i]=max(dp[i-2]+arr[i],dp[i-1]);
            if(dp[i-2]+arr[i] >= dp[i-1])
            {
                added[i]=arr[i];
            }
        }
   /* cout<<"0 0"<<" ";
    for(int i=2;i<=n+1;i++)
        cout<<arr[i]<<" ";
         cout<<endl;
    for(int i=0;i<=n+1;i++)
         cout<<dp[i]<<" ";
         cout<<endl;
    for(int i=0;i<=n+1;i++)
    cout<<added[i]<<" ";
    cout<<endl; */
    int sum=dp[n+1];
    vector<int>ans;
    for(int i=n+1;i>=2;i--)
    {

        if(added[i]>0 && sum==dp[i])
        { int m=0;
           while(sum==dp[i])
           {
              m=max(m,added[i]);
              i--;
           }
            ans.push_back(m);
            sum=sum-m;
            i++;
        }
    }

    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
        cout<<endl;
     }
    }
}
