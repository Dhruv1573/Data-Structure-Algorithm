#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long h,w,x,y;
    cin>>h>>w>>x>>y;
    long long a=h/x;
    long long b=a*y;
    long long c=a*x;
    if(b<=w)
    {
        cout<<c<<" "<<b;
        //long long p=10;
    }
    else if(w<=b)
    {
        long long p=w/y;
        long long q=p*x;
        long long r=p*y;
        cout<<q<<" "<<r;
    }
    else if(h<x || h<y)
    cout<<0<<" "<<0;

}
