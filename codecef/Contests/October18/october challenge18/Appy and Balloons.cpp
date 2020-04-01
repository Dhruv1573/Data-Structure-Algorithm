#include<bits/stdc++.h>
using namespace std;


int main()
{

    long long  n,m,k,t,j=0;
    cin>>n>>m;
    long long  a[n],b[n],c[n];
    for(long long i=0;i<n;i++)
        cin>>a[i];
    for(long long i=0;i<n;i++)
        cin>>b[i];


       // sort(a,a+n);
        //sort(b,b+n);
    for(long long int j=0;j<=m;j++)
    {
        t=0;
        for(long long i=0;i<n;i++)
        {
            if(t<(a[i]*b[i]))
            {
                t=a[i]*b[i];
                k=i;
            }
        }
         a[k]=a[k]-1;


    }
    cout<<t<<endl;
}
