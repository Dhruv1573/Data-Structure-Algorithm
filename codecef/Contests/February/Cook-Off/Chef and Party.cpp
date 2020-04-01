#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define inf (long long int) 1e18
#define eps 0.000001
#define vl vector<ll>
#define sl set<ll>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define mod 1000000007
#define MAXN 100001

int fun(long n)
{
    long a[n],count=0;
        for(long i=0;i<n;i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);
        long party=0;
        for(long i=0;i<n;i++)
        {
            if(a[i]<=party)
                party++;
        }
        return party;
}
int main()
{
    int t;
    cin>>t;
    long n;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cout<<fun(n)<<endl;
           
        //cout<<party<<endl;
    }
}
