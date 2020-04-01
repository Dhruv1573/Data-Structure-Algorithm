
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    //int n,m,l,r,p;
    int n,a,b,z,count;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        count=0;
            for(int i=0;i<n;i++)
            {
                z=0;
               // count=0;
                cin>>a>>b;

                    z=abs(a-b);

                    if(z>5)
                    {

                        count++;

                    }
            }

cout<<count<<endl;

    }

}
