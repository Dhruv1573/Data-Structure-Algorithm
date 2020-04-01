
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,m;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;

        int a[n];

        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            if(a[i]%m==0)
                count++;
        }

        int z=pow(2,count)-1;
        cout<<z<<endl;
    }
}
