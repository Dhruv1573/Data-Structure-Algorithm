#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,x,y;
    int broken=0;
    cin>>n>>c;

    for(int i=c;i>=0;i--)
    {
    if(x>=4&&broken==0&&c>=x)
    {
        broken=1;
        c--;
        cout<<1<<" "<<c<<endl<<flush;
        //cout<<c<<endl<<flush;
        if(c<x)
        {
            broken=0;
            cout<<broken<<endl<<flush;
            cout<<1<<" "<<x<<endl<<flush;
            broken=1;
            cout<<broken<<endl<<flush;

        }
        else
            cout<<broken<<endl<<flush;

    if(broken==1)
    {
        //cout<<broken<<endl<<flush;
        broken=0;
        c--;


    }
     cout<<2<<endl<<flush;

    }

    }

    cout<<3<<" "<<x<<endl<<flush;


}
