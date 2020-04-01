
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t;

    cin>>n>>k;
    int count =0;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t%k==0)
            count++;

    }
     cout<<count<<endl;
}
