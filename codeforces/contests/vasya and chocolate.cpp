
#include<bits/stdc++.h>
using namespace std;

int main()
{

   long long int t;
    cin>>t;
   long long int s,a,b,c;

    for(long long int i=0;i<t;i++)
    {
        cin>>s>>a>>b>>c;

       long long int z=s/c;
            long long int p=z+((z/a)*b);


        cout<<p<<endl;



    }
}
