#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long max=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        if((a[i]%a[i+1])>max)
            max=a[i]%a[i+1];
    }
    cout<<max;
   /* for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            cout<<a[i]<<" "<<a[j]<<endl;
            cout<<a[i]%a[j]<<endl;
        }
    }
    */
}
