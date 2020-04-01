
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int x,y;

    for(int i=0;i<n;i++)
    {
        cin>>x>>y;

        if((y*100)/x>=75)
        {
        cout<<0<<endl;
        }
        else
        {
            int z=3*x-4*y;
            cout<<z<<endl;
        }
    }
}
