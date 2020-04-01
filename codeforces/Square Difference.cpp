#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    long long a,b;

    for(int i=0;i<t;i++)
    {
        cin>>a>>b;

        long long z=(a-b)*(a+b);
        if((a-b)!=1)
            cout<<"NO"<<endl;
        else
        {
            bool f=true;
            for(long long int i=2;i*i<=(a+b);i++)
        {

            if((a+b)%i==0)
                f=false;


        }
           if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }



    }
}
