#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];

    int maximum=INT_MIN,minimum=INT_MAX,max_i,min_i;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<minimum)
        {
            minimum = a[i];
            min_i=i;
        }
    }

    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        if(b[i]>maximum)
        {
            maximum = b[i];
            max_i=i;
        }
    }
    //cout<<maximum<<endl<<minimum<<endl<<max_i<<endl<<min_i<<endl;

    int arr[m]={0},p,q;
   for(int i=0;i<m;i++)
   {
        arr[i]=minimum+b[i];
        p=arr[max_i];
        //cout<<arr[i]<<" ";
   }
   int brr[n]={0};
   int z,ans;
   for(int i=0;i<n;i++)
   {
       brr[i]=maximum+a[i];
       q=brr[min_i];
       //cout<<brr[i]<<" ";
       //ans=brr[i];

       if(maximum+minimum==brr[i])
       {
            //cout<<"yes";
            z=i;
       }
   }
        if(z<=n)
        {
            for (int i=z; i<n-1;i++)
            brr[i]=brr[i+1];
        }

}

