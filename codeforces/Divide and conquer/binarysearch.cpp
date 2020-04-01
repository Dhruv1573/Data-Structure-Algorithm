#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int l,int r,int x)
{
    if(r>=l)
    {

    int mid=(l+r)/2;
    if(a[mid]==x)
        return mid;
    if(a[mid]>x)
        return binarysearch(a,l,mid-1,x);

        return binarysearch(a,mid+1,r,x);

    }
    return -1;
}



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int x;
    cin>>x;
    int start=0;
    int z=binarysearch(arr,start,n-1,x);
    if(z==-1)
    cout<<"not present";
    else
        cout<<z;
}
