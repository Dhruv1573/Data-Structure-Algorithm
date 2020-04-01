#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int value,c;
    for(int i=1;i<=n-1;i++)
    {
        value=arr[i];
        c=i;
        while(c>0 && arr[c-1]>value)
        {
            arr[c]=arr[c-1];
            c=c-1;
        }
        arr[c]=value;

    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
