#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[n];
    int c[10];
    for(int i=0;i<10;i++)
        c[i]=0;

    for(int i=0;i<n;i++)
    {
        c[a[i]]=c[a[i]]+1;
    }
    for(int i=1;i<10;i++)
    {
        c[i]=c[i]+c[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        b[c[a[i]]-1]=a[i];
        c[a[i]]--;

    }
        for(int i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
}
