#include <iostream>
using namespace std;
int main()
 {
     int n;
     cin>>n;
     int arr[n];
     int pre[n+1];
     int vect[n];
     int suf[n+1];
     for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           pre[arr[i]]=i;
       }
       for(int i=0;i<n;i++)
       {
           cin>>vect[i];
           suf[vect[i]]=i;
       }
       int cnt=0;
       int m=0;
       for(int i=1;i<=n;i++)
       {
          // cout<<suf[i]<<" "<<pre[i]<<endl;
           m=max(m,(suf[i]-pre[i]));
       }
       cout<<m<<endl;

}
