
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {


   long n,k;
  cin>>n>>k;

  long arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  long pre[n]={0};
  long suff[n]={0};
  pre[0]=arr[0];
  suff[n-1]=arr[n-1];

  for(int i=1;i<n;i++)
    pre[i]=pre[i-1]+arr[i];

    for(int i=n-1;i>=0;i--)
        suff[i-1]=suff[i]+arr[i-1];

        long i;
        for( i=0;i<n;i++)
            if(pre[i]>=suff[i])
            break;

        cout<<i+1<<endl;
    }

    return 0;
}
