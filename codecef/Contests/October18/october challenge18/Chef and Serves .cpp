#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    int p1,p2,k;

    for(int i=0;i<t;i++)
    {
        cin>>p1>>p2>>k;

        int z=(p1+p2)/k;
        if(z%2==0)
        {
            cout<<"CHEF"<<endl;
        }
        else
            cout<<"COOK"<<endl;
    }
}
