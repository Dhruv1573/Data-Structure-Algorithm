#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int z,p;
    for(int i=9;i>=1;i--)
    {
        if(n%i==0)
        {
          z=n/i;
          p=i;
           break;


        }

    }
    cout<<z<<endl;
    for(int i=0;i<z;i++)
    {
        cout<<p<<" ";
    }
}
