#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define pii pair<int,int>

int n,t,total,k,sol=3;
map<int,int> a,b;

int main()
{

    cin>>n>>k;
    int p[n],q[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        a[p[i] ]++;
        if(a[p[i]]>=2)
            total=1;
    }
    if(!total)
    {
        for(int i=0;i<n;i++)
        {
            if(p[i]!=(p[i]&k) )
            {
                b[(p[i]&k)]++;
                if(a[(p[i]&k)]>=1)
                    sol=min(sol,1);
                else if(b[(p[i]&k)]>=2)
                sol=min(sol,2);
            }
        }
    }
    else
        return cout<<0,0;
    cout<<((sol==3)?-1:sol);
    return 0;
}
