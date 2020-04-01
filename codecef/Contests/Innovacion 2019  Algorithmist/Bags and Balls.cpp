#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,k,r;
    cin>>n>>k>>r;
    //int z=k/r;
    long z=-r+sqrt(r*r+8*k*r);
    long p=(z)/(2*r);
    cout<<n-p;


    //cout<<sqrt(705);
}
