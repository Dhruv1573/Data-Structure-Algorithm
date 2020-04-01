#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int l,d,h;
    for(int i=0;i<t;i++)
    {
        cin>>l>>d>>h;
        if(l*h>=d)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

}
