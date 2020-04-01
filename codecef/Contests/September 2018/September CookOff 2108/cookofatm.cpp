

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    int n,m;

    for(int i=0;i<t;i++)
    {

        cin>>n>>m;
        int a[n];
       // int b[n];


        for(int i=0;i<n;i++)
        {
            cin>>a[i];


            //int total=m;
            //int b[n]={0};
            if(m>a[i])
            {

                m=m-a[i];
                a[i]=1;
            }
            else if(m<a[i])
                a[i]=0;
            else if(m==a[i])
            {

            m=m-a[i];
                a[i]=1;

            }


        }
        for(int i=0;i<n;i++)
            cout<<a[i];
            cout<<endl;
    }
}
