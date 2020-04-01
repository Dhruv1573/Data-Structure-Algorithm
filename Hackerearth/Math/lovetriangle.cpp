#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll love(ll x)
{
if(x<9)
    return x;
else
 return x%9+10*love(x/9);
}
int main()
{
ll x;
while( cin >> x )
{
cout<<love(x)<<endl;
}
return 0;
}
