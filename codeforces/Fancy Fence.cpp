#include<bits/stdc++.h>
using namespace std;

int fence(int n)
{
    if(360%(180-n)==0)
        return true;
    else
        return false;

}
int main()
{
    int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++)
    {
        cin>>n;

        int z=fence(n);
        if(z==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
