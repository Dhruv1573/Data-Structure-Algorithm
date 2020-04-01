#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        long long count=0;
    unsigned char l,r,v;
    cin>>l>>r>>v;

    for(long long i=l;i<=r;i++)
    {
        if(v&i==v)
            count++;
    }
    cout<<count<<endl;
}
}
