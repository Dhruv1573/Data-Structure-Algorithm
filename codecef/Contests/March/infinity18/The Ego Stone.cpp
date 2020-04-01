#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int sum=n*(n*n+1)/2;
        cout<<sum<<endl;
    }
}
