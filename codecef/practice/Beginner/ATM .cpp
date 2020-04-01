
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    float m;
    cin>>n>>m;
    int z;
    //int x=int(m);
    if(n%5!=0 || n+0.5>m)
    {
        cout<<m;
    }
        else
        {
             m=m-(n+0.5);
             cout<<fixed<<setprecision(2)<<m;
        }

        /*
        if(n<m)
        {
        z=m-(n+0.5);
        printf("%0.2f",z);
       // cout<<fixed;
//        cout<<fixed<<q;
        }
        else
        {
           // cout<<fixed;
            cout<<m;
        }
    }
    else
        cout<<m;*/

 }
