#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long s1,s2,t1,t2,x;
    for(int i=0;i<t;i++)
    {
        cin>>s1>>s2>>t1>>t2>>x;

        long long z=s2/s1,ans=1;
        //cout<<z<<endl;
        if(t2-t1>1)
            z=sqrt(z);

        ans=s1/pow(z,t1-1);
        long long a=(ans*(pow(2,x-1)));


       cout<<a<<endl;
    }
}
