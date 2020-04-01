#include<bits/stdc++.h>
using namespace std;
int fact (int n)
{
    return n==0?1:n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}
