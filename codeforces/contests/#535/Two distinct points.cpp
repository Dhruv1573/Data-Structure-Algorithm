#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    int l1,r1,l2,r2;
    for(int i=0;i<q;i++)
    {
        cin>>l1>>r1>>l2>>r2;

        int z=r1-l2;
        int p=r2-l2;

        if(l1<l2 || l1>l2)
        {
            cout<<l1<<" "<<l2<<endl;
        }
        else
        {
        int q=l1+1;
            if(q<=r1)
                cout<<q<<" "<<l2<<endl;

        }
          //  cout<<l1<<" "<<r2<<endl;

    }
}

