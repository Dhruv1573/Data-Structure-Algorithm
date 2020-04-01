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
        long a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];

            //for first element
             if((a[n-1]+a[1])>=b[0])
                {
                    b[0]=0;
                   // a[0]=0;
                }
                //for last element
            if((a[n-2]+a[0])>=b[n-1])
                    b[n-1]=0;
            //for rest of element
            for(int i=1;i<n-1;i++)
            {
              //  cout<<b[i+1];
                if((a[i-1]+a[i+1])>=b[i])
                {
                    b[i]=0;
                    //a[i+1]=0;
                }



            }
            //cout<<b[0];



            long max=0;
            for(int i=0;i<n;i++)
            {
               // cout<<b[i]<<" ";
                if(max<b[i])
                    max=b[i];
            }
            if(max==0)
                cout<<-1<<endl;
            else
            cout<<max<<endl;
    }
}
