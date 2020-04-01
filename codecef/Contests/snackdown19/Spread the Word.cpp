#include<bits/stdc++.h>
using namespace std;

int dayscount(int arr[],int n)
{
      int z=arr[0];
      int count=1;
      int initial=z;

    for(int i=1;i<n;i++)
    {
      z=z+arr[i];

      initial=initial-1;
      if(initial==0 && i<n-1)
        {
            initial=z;
            count++;
        }
    }
    return count;
}
int main()
{

    int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int arr[n],max=0,z;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

  cout<<dayscount(arr,n)<<endl;
}
    return 0;
}


