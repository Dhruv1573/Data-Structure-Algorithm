
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n;
          int fact=1;
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<fact<<endl;

    }

}
