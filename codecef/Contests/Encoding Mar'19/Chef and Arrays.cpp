#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];

        for(int i=0;i<n;i++)
        {
            if((a[i]*10+b[i])>=(b[i]*10+a[i]))
                cout<<a[i]*10+b[i]<<" ";
            else
                cout<<b[i]*10+a[i]<<" ";
        }
        cout<<endl;

    }
}
