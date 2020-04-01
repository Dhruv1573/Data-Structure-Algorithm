
#include<bits/stdc++.h>
using namespace std;

int main()
{
   long int t;
    cin>>t;
        long int n;
    for(long int i=0;i<t;i++)
    {
        cin>>n;
        bool temp=false;
        for(long int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
               temp=true;
               break;
            }

        }
        if(temp)
            cout<<"composite"<<endl;
        else
             cout<<"prime"<<endl;
    }
}
