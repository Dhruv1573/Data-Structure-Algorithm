#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    int xo=0;
    for(int i=0;i<k;i++)
    {
        xo=xo^a[i];
    }

    int max=xo;

        for(int j=1;j<=n-k;j++)
        {

            xo=xo^a[j-1]^a[k+j-1];
            //cout<<xo<<endl;
            if(xo>max)
                max=xo;
        }

    cout<<max<<endl;
    }
}
