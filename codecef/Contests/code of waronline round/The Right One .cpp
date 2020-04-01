
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        int n=180-a;
        if(360%n==0)
        {

            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }


}
