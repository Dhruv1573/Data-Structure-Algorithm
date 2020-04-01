#include<bits/stdc++.h>
using namespace std;
int main()

{
    long long n,m,k,l;
    cin>>n>>m>>k>>l;
    long long z=(k+m+l-1)/m;
    if(z*m>n)
        cout<<-1<<endl;
    else
    {
        //cout<<1;
        cout<<z<<endl;

    }
}
