
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;

    cin>>t;

    int n,count;

    for(int i=0;i<t;i++)
    {
        count=0;
        cin>>n;


        for(int j=2;j*j<=n;j++)
        {
            if(n%j==0)
            {
                count++;


            }
        }
            if(count>0)
                cout<<"no"<<endl;
            else
                cout<<"yes"<<endl;



    }



}
