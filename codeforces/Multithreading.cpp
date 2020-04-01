
#include<bits/stdc++.h>
using namespace std;
/*
int sorts(int a[],int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
            if(a[i]>a[i+1])
                count++;

    }
    return count;
}
*/
int main()
{

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];

    }
    long long k=n-1;

    bool y=false;
    while(k>0 && y==false)
    {
        if(a[k]>a[k-1])
            k--;
            else
            y=true;

    }
    //int z=sorts(a,n);

    cout<<k;
}
