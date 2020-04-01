#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    long int n;

    for(int i=0;i<t;i++)
    {
        cin>>n;

          long int x=0,y=0,z=0;
            long int q=n%26;
           long int p=n/26;
           long long r=pow(2,p);
          if(n%26==0)
          cout<<0<<" "<<0<<" "<<r/2<<endl;
           else if(q>0 && q<=2)
           cout<<r<<" "<<0<<" "<<0<<endl;
           else if(q>=3 && q<=10)
           cout<<0<<" "<<r<<" "<<0<<endl;
           else if(q>=11 && q<=25)
           cout<<0<<" "<<0<<" "<<r<<endl;




    }


}

