#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int d;
    for(int i=0;i<t;i++)
    {

        cin>>d;
        int d1,p1,a[32],D[d],P[d];
        for(int i=0;i<=31;i++)
            a[i]=0;
        for(int i=0;i<d;i++)
        {
            cin>>D[i]>>P[i];
            a[D[i]]=P[i];
        }
       // for(int i=0;i<31;i++)
         //   cout<<a[i]<<" ";
         int sum=0;
         for(int i=1;i<=31;i++)
         {
            sum=sum+a[i];
            a[i]=sum;
         }


           // cout<<sum<<endl;;
        int q;
        cin>>q;
        int req,dead;
        for(int i=0;i<q;i++)
        {
            cin>>req>>dead;
            if(a[req]>=dead)
                cout<<"Go Camp"<<endl;
            else
                cout<<"Go Sleep"<<endl;

        }

    }

}
