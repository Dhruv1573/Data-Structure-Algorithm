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
    int imin,min=INT_MIN;
    for(int i=0;i<n-2;i++)
    {
        imin=i;
        for(int j=i+1;j<n-1;j++)
        {
            if(arr[j]<arr[imin])
            imin=j;
        }
        int temp=arr[i];
        arr[i]=arr[imin];
        arr[imin]=temp;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}
