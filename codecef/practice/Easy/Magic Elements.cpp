
#include <iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     for(int i=0;i<t;i++)
     {
         int n,k;
         cin>>n>>k;
         int arr[n];
         long sum=0;
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
             sum+=arr[i];
         }
         int count=0;
         for(int i=0;i<n;i++)
         {
             if((arr[i]+k)>(sum-arr[i]))
                count++;
         }
         cout<<count<<endl;
     }
}
