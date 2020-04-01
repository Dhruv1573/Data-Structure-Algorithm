#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t,n;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n;
        long long a[n],countn=0,countp=0,sumn=0,sump=0,np,pp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
            {
                countn++;
                sumn+=a[i];
                np=pow(sumn,2);

            }

            else if(a[i]>0)
            {
                countp++;
                sump+=a[i];
                pp=pow(sump,2);
            }



        }
       // cout<<np<<endl;
        if(countn==0)
        cout<<countp<<" "<<countp<<endl;
        else
        {
            if(pp>=np)
            cout<<countp<<" "<<countn<<endl;
            else
                cout<<countn<<" "<<countp<<endl;

        }
    }

}
