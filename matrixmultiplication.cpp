#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int a[n][n],b[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    int c[n][n];
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            //cin>>a[i][j];
            c[i][j]=0;
            for(int k=0;k<n;k++)
                c[i][j]+=a[i][k]*b[k][j];

            cout<<c[i][j]<<endl;
        }
    }
}
