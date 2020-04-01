#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,k,d,sum,c;
    cin>>t;
    for(int i=1;i<=t;i++)
    {


   // int l,k,d=0,sum=0,c=0;


    cin>>l>>k;
      sum=0;
   c=1;

    if(l<k)
    {
        cout<<"Case "<<i<<": "<<0<<endl;

    }
    else
    {
        d=l-k;
    for(int j=0;j<=d;j++)
    {

        sum+=c;
        c++;

    }

    cout<<"Case "<<i<<": "<<sum<<endl;

    }
}
}
