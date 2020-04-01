#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    int x,y,z;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y>>z;

        if(x+y-z==0)
            cout<<"yes"<<endl;
        else if(x-y+z==0)
            cout<<"yes"<<endl;
        else if(y+z-x==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
