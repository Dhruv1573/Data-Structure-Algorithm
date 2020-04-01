#include<bits/stdc++.h>
using namespace std;
int fun(int x,int y)
{
    if(x==0)
        return y;
    else
        return fun(x-1,y+x);
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<fun(x,y);
}
