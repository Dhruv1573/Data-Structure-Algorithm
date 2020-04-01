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

int main()
{
    ll t;
    cin>>t;
    ll n,p,maxi,i;
    loop(i,0,t)
    {
        cin>>n>>p;
        maxi=(n / 2) + 1;
        ll q = n%maxi;

        if(q == 0)
        {
            cout<< p*p*p <<endl;
        }
        else if(q!=0)
        {
            ll a = p-q;
            ll b = p-n;
            ll c = a*a;
            ll d = b*b;
            ll e = a*b;
            cout<< c+d+e <<endl;
        }

        }

    }
