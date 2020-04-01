#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int z=k,count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        z=z-arr[i];
        if(z>0)
            count++;
    }
    cout<<count+1;
}
