#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int v[n],p[n],sumofvillain=0,sumofplayer=0,max1=INT_MIN,max2=INT_MIN,ans[n];
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sumofvillain+=v[i];

        }
        sort(v,v+n);
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
            sumofplayer+=p[i];
            if(p[i]>max1)
                max1=p[i];
        }
        sort(p,p+n);

        int count=0,count1=0;
        for(int i=0;i<n;i++)
        {

                if(p[i]<v[i])
                {
                        count++;
                }
        }
        if(count>0)
             cout<<"LOSE"<<endl;
        else
             cout<<"WIN"<<endl;
       // for(int i=0;i<n;i++)
         //   cout<<ans[i]<<endl;
    /*    if(count>count1)
            cout<<"WIN"<<endl;
            else
            cout<<"LOSE"<<endl;
            */

    }

}
