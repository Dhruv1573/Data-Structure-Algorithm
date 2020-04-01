#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int r1,c1,r2,c2;
    for(int i=0;i<t;i++)
    {
        cin>>r1>>c1>>r2>>c2;
        if(r1<r2)
        {
       if((r1+c1)==(r2+c2) || (r2-r1==1 && (abs(c1-c2)==0 || abs(c1-c2)==1)))
        cout<<"White"<<endl;
       else
        cout<<"Black"<<endl;
        }
         else if(r1>r2)
        {
        if((r1+c1)==(r2+c2) || (r1-r2==1 && (abs(c1-c2)==0 || abs(c1-c2)==1)))
        cout<<"Black"<<endl;
       else
        cout<<"White"<<endl;
        }

    }
}
